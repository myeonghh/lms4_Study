#include "widget.h"
#include "ui_widget.h"

#include <QtWidgets>
#include <QDebug>

// [02.1] Widget class 생성자 실행
Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);

    // [02.3] Server Network 초기화
    initServ();
}

// Widget class 파괴자
Widget::~Widget()
{
    delete ui;
}

// [02.3] Widget 생성자 실행시, Server 초기화 (Server 클래스로 독립 되어야 할 부분)
void Widget::initServ()
{

    // [02.3.1] hostAddress (이 소스코드가 실행될 프로그램(서버)의 ip 찾기) 찾기
    QHostAddress hostAddress = Widget::getMyIP();

    // [02.3.2] tcpServer 서버 소켓 세팅
    //// [1] 생성 : 서버 소켓 생성
    //// [2] 결합 : 서버 IP 결합
    tcpServer = new QTcpServer(this);

    //// [3] 대기 : 클라이언트의 연결 요청 대기
    if (!tcpServer->listen(hostAddress, 25000))
    {
        QMessageBox::critical(this, tr("TCP Server"),
                              tr("서버를 시작할 수 없습니다. 에러메세지 : %1.")
                              .arg(tcpServer->errorString()));
        close();
        return; // 실패시 종료
    }


    // [02.3.3]
    // tcpServer 소켓이 정상적으로 생성되면, 서버 정보를 lable widget에 표시
    ui->labelStatus->setText(tr("서버 동작 중 \n\n"
                                "IP : %1\n"
                                "PORT : %2\n")
                                .arg(hostAddress.toString()).arg(tcpServer->serverPort()));

    // [02.3.4]
    // tcpServer 객체에 클라이언트의 연결 요청 Signal 이 생기면, slot_newConnection연결
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(slot_newConnection()));

    ui->connMsgEdit->clear();
}

// [02.4] Server가 클라리언트의 연결 요청이 받아들인 후 동작할 로직 (Server 클래스로 독립 되어야 할 부분)
void Widget::slot_newConnection()
{
    // [02.4.1] 연결된 소켓 생성
    //// [4] 수락 : tcpServer 소켓 + 연결 요청시 전달 받은 클라이언트 정보를 기반
    ////           새로운 연결 QTcpSocket 생성
    QTcpSocket *connectedSocket = tcpServer->nextPendingConnection();

    connect(connectedSocket, SIGNAL(disconnected()),
            connectedSocket, SLOT(deleteLater()));

    // [02.4.2] 서버에 연결 상태 정보 출력
    QString clnt_addr = connectedSocket->peerAddress().toString();
    QString currTime = QTime::currentTime().toString("hh시 mm분 ss초 zzz밀리초");
    QString text_conn = QString("<-클라이언트 연결 성공 (%1, %2)").arg(currTime, clnt_addr);
    ui->connMsgEdit->append(text_conn);

    // [02.4.3] 데이터 송수신
    //// [5] 송수신
    QByteArray message = QByteArray("Hello Client ~ (서버에서 보낸 인사)");
    currTime = QTime::currentTime().toString("hh시 mm분 ss초 zzz밀리초");
    // 문장 전송
    connectedSocket->write(message);
    // 전송 완료 상태 위젯 표시
    QString text_send = QString("->클라이언트 문장 전송 (%1)").arg(currTime);
    ui->connMsgEdit->append(text_send);

    // [02.4.5] 연결된 클라이언트로 메시지를 보내고, 서버에서 클라이언트와의 연결을 종료한다.
    //// [6] 닫음
    connectedSocket->disconnectFromHost();

    // [02.4.6] 서버에 연결 해제 상태 출력 (이미 연결 끊긴 상태)
    currTime = QTime::currentTime().toString("hh시 mm분 ss초 zzz밀리초");
    QString text_close = QString("->클라이언트 접속 종료 (%1, %2)").arg(currTime, clnt_addr);
    ui->connMsgEdit->append(text_close);
}


// [02.7]
QHostAddress Widget::getMyIP()
{

    QHostAddress myAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // localhost(127.0.0.1) 가 아닌 것을 사용
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
            ipAddressesList.at(i).toIPv4Address()) {
            //qDebug() << ipAddressesList.at(i);
            myAddress = ipAddressesList.at(i);
            break;
        }
    }

    // 인터넷이 연결되어 있지 않다면, localhost(127.0.0.1) 사용
    if (myAddress.toString().isEmpty())
        myAddress = QHostAddress(QHostAddress::LocalHost);

    return myAddress;
}


