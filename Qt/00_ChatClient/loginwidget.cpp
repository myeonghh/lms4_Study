#include "loginwidget.h"               // LoginWidget 클래스의 선언이 포함된 헤더 파일
#include "ui_loginwidget.h"            // Qt 디자이너로 생성된 UI 파일을 포함

LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),                    // 부모 위젯을 설정하여 상위 클래스인 QWidget 생성자 호출
    ui(new Ui::LoginWidget)             // UI 객체 생성 및 초기화
{
    ui->setupUi(this);                  // UI 레이아웃을 설정 (UI 디자인 파일에서 설정한 대로 레이아웃을 설정)
    connect(ui->loginButton, &QPushButton::pressed,  // loginButton이 눌렸을 때
            this, &LoginWidget::loginBtnClicked);    // loginBtnClicked 함수와 연결 (슬롯-시그널 연결)
}

void LoginWidget::loginBtnClicked()
{
    QString serverIp = ui->ipLineEdit->text().trimmed();  // ipLineEdit에 입력된 IP 주소를 가져오고, 앞뒤 공백을 제거
    QString name = ui->nameLineEdit->text().trimmed();    // nameLineEdit에 입력된 이름을 가져오고, 앞뒤 공백을 제거

    emit sig_loginInfo(serverIp, name);                   // 로그인 정보 (IP 주소와 이름)를 전달하는 신호 발생
}

LoginWidget::~LoginWidget()             // 소멸자: 객체가 파괴될 때 호출됨
{
    delete ui;                          // 동적으로 할당된 UI 객체를 해제하여 메모리 누수 방지
}
