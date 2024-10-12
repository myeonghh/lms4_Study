#include "widget.h"                     // Widget 클래스의 선언이 포함된 헤더 파일
#include "./ui_widget.h"                // Qt 디자이너로 생성된 UI 파일을 포함

#include <QRegularExpression>           // 정규 표현식을 사용하기 위한 헤더 포함
#include <QRegularExpressionMatch>      // 정규 표현식의 매칭 결과를 처리하는 클래스 포함

Widget::Widget(QWidget *parent)
    : QWidget(parent),                  // 부모 위젯을 설정하여 상위 클래스인 QWidget 생성자 호출
    ui(new Ui::Widget)                  // UI 객체 생성 및 초기화
{
    ui->setupUi(this);                  // UI 레이아웃 설정

    loginWidget = new LoginWidget();    // 로그인 위젯을 동적으로 생성

    connect(loginWidget, &LoginWidget::sig_loginInfo,  // loginWidget의 sig_loginInfo 신호를
            this,        &Widget::loginInfo);         // Widget 클래스의 loginInfo 슬롯에 연결

    connect(ui->sayButton, &QPushButton::pressed,     // sayButton이 눌렸을 때
            this,           &Widget::sayButton_clicked);  // sayButton_clicked 함수와 연결

    loginWidget->show();                 // 로그인 위젯을 화면에 표시

    socket = new QTcpSocket(this);       // QTcpSocket 객체를 생성하여 소켓 통신을 관리
    connect(socket, SIGNAL(readyRead()),  // 소켓에 읽을 데이터가 있을 때 readyRead 슬롯 호출
            this,   SLOT(readyRead()));
    connect(socket, SIGNAL(connected()),  // 소켓이 서버와 연결되었을 때 connected 슬롯 호출
            this,   SLOT(connected()));
}

void Widget::loginInfo(QString addr, QString name)
{
    ipAddr = addr;                       // 전달받은 IP 주소를 클래스 멤버 변수에 저장
    userName = name;                     // 전달받은 사용자 이름을 클래스 멤버 변수에 저장

    socket->connectToHost(ipAddr, 35000); // 소켓을 통해 서버의 IP 주소와 포트 35000에 연결 시도
}

void Widget::sayButton_clicked()
{
    QString message = ui->sayLineEdit->text().trimmed();  // 입력 필드에서 메시지를 가져와 공백 제거

    if(!message.isEmpty())                // 메시지가 비어 있지 않으면
    {
        socket->write(QString(message + "\n").toUtf8());  // 메시지를 UTF-8로 인코딩하여 서버로 전송
    }

    ui->sayLineEdit->clear();             // 입력 필드를 비움
    ui->sayLineEdit->setFocus();          // 입력 필드에 포커스를 다시 설정
}

void Widget::connected()
{
    loginWidget->hide();                  // 로그인 위젯을 숨김
    this->window()->show();               // 현재 위젯(채팅 화면)을 표시

    socket->write(QString("/me:" + userName + "\n").toUtf8());  // 서버에 "/me" 명령어와 사용자 이름을 전송
}

void Widget::readyRead()
{
    while(socket->canReadLine())          // 소켓에서 읽을 수 있는 데이터가 있으면
    {
        QString line = QString::fromUtf8(socket->readLine()).trimmed();  // 한 줄 읽어서 UTF-8로 변환 후 공백 제거

        QRegularExpression re("^([^:]+):(.*)$");  // 메시지를 "사용자:내용" 형태로 파싱하는 정규식
        QRegularExpressionMatch match = re.match(line);  // 정규식 매칭 시도

        if(match.hasMatch())              // 매칭이 성공하면
        {
            QString user = match.captured(1);   // 첫 번째 그룹 (사용자 이름)을 가져옴
            QString message = match.captured(2); // 두 번째 그룹 (메시지 내용)을 가져옴

            ui->roomTextEdit->append("<b>"+user+"</b>:"+message);  // 채팅 창에 사용자와 메시지 출력
        }
    }
}

Widget::~Widget()                         // 소멸자: 객체가 파괴될 때 호출됨
{
    delete ui;                            // 동적으로 할당된 UI 객체를 해제하여 메모리 누수 방지
}
