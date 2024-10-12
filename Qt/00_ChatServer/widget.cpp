#include "widget.h"                     // Widget 클래스의 선언이 포함된 헤더 파일
#include "./ui_widget.h"                // Qt 디자이너로 생성된 UI 파일을 포함

Widget::Widget(QWidget *parent)
    : QWidget(parent),                  // 부모 위젯 설정 및 상위 클래스인 QWidget 생성자 호출
    ui(new Ui::Widget)                  // UI 객체 초기화
{
    ui->setupUi(this);                  // UI 레이아웃 설정

    server = new ChatServer();          // ChatServer 객체를 생성하여 서버 초기화
    connect(server, SIGNAL(clients_signal(int)), this, SLOT(slot_clients(int)));  // 클라이언트 수 갱신 신호 연결
    connect(server, SIGNAL(message_signal(QString)), this, SLOT(slot_message(QString)));  // 메시지 신호 연결

    server->listen(QHostAddress::Any, 35000);  // 서버가 모든 IP 주소에서 포트 35000으로 연결 대기
}

void Widget::slot_clients(int users)
{
    QString str = QString("Connected Members : %1").arg(users);  // 현재 연결된 사용자 수 출력용 문자열 생성
    ui->label->setText(str);              // 사용자 수를 라벨에 표시
}

void Widget::slot_message(QString msg)
{
    ui->textEdit->append(msg);            // 메시지를 채팅 창에 추가
}

Widget::~Widget()
{
    delete ui;                            // 동적으로 할당된 UI 객체 해제
}
