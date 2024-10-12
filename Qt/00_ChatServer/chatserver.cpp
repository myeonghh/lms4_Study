#include "chatserver.h"                  // ChatServer 클래스의 선언이 포함된 헤더 파일
#include <QRegularExpression>            // 정규 표현식을 사용하기 위한 헤더 포함
#include <QRegularExpressionMatch>       // 정규 표현식 매칭 결과를 처리하는 클래스 포함

ChatServer::ChatServer(QObject *parent)
    : QTcpServer(parent)                 // 상위 클래스인 QTcpServer의 생성자 호출
{
}

void ChatServer::incomingConnection(qintptr socketfd)
{
    QTcpSocket *client = new QTcpSocket(this);  // 클라이언트와의 연결을 처리하는 소켓 생성
    client->setSocketDescriptor(socketfd);      // 클라이언트 소켓에 소켓 파일 디스크립터 설정
    clients.insert(client);                     // 클라이언트 소켓을 서버의 클라이언트 목록에 추가

    emit clients_signal(clients.count());       // 클라이언트 수를 갱신하는 신호 발생

    QString str = QString("New Member: %1").arg(client->peerAddress().toString());  // 새 클라이언트 접속 정보 생성
    emit message_signal(str);                   // 접속 정보 출력 신호 발생

    connect(client, SIGNAL(readyRead()), this, SLOT(readyRead()));   // 데이터를 읽을 준비가 되면 readyRead 호출
    connect(client, SIGNAL(disconnected()), this, SLOT(disconnected()));  // 연결이 끊어지면 disconnected 호출
}

void ChatServer::readyRead()
{
    QTcpSocket *client = (QTcpSocket*)sender();  // 어떤 클라이언트가 데이터를 보냈는지 확인
    // sender()는 어떤 객체가 현재 시그널을 발생시켰는지 알려주는 함수
    // sender()는 기본적으로 QObject* 타입을 반환하기 때문에, QTcpSocket* 타입으로 명시적 캐스팅을 수행해야 함.
    while(client->canReadLine())                 // 읽을 수 있는 데이터가 있을 때까지
    {
        QString line = QString::fromUtf8(client->readLine()).trimmed();  // 한 줄 읽어서 UTF-8로 변환 후 공백 제거

        QString str = QString("Read line: %1").arg(line);  // 읽은 라인을 로그로 저장
        emit message_signal(str);                         // 읽은 데이터 신호 발생

        QRegularExpression meRegex("^/me:(.*)$");  // "/me" 명령어를 통해 사용자 이름 설정
        QRegularExpressionMatch match = meRegex.match(line);  // 정규식 매칭 시도

        if(match.hasMatch())              // "/me" 명령어 매칭에 성공하면
        {
            QString user = match.captured(1);  // 사용자 이름을 가져옴
            users[client] = user;              // 사용자 이름을 클라이언트 소켓에 매핑

            foreach(QTcpSocket *client, clients)  // 모든 클라이언트에게 알림
            {
                client->write(QString("Server: %1 connected\n").arg(user).toUtf8());
            }
        }
        else if(users.contains(client))     // 기존 사용자라면
        {
            QString message = line;         // 메시지를 읽고
            QString user = users[client];   // 해당 사용자 확인

            QString str = QString("User name: %1, Message: %2").arg(user, message);  // 로그 출력용 문자열 생성
            emit message_signal(str);       // 메시지 신호 발생

            foreach(QTcpSocket *otherClient, clients)  // 모든 클라이언트에게 메시지 전송
                otherClient->write(QString(user+":"+message+"\n").toUtf8());
        }
    }
}

void ChatServer::disconnected()
{
    QTcpSocket *client = (QTcpSocket*)sender();  // 어떤 클라이언트가 연결을 끊었는지 확인

    QString str = QString("Disconnect: %1").arg(client->peerAddress().toString());  // 연결 끊김 정보 생성
    emit message_signal(str);                   // 로그 출력용 신호 발생

    clients.remove(client);                     // 클라이언트 목록에서 제거
    emit clients_signal(clients.count());       // 클라이언트 수 갱신

    QString user = users[client];               // 연결이 끊긴 사용자의 이름을 확인
    users.remove(client);                       // 사용자 목록에서 제거

    sendUserList();                             // 사용자 목록 갱신
    foreach(QTcpSocket *client, clients)        // 다른 클라이언트에게 알림
        client->write(QString("Server: %1 Disconnect").arg(user).toUtf8());
}

void ChatServer::sendUserList()
{
    QStringList userList;                       // 사용자 목록 생성
    foreach(QString user, users.values())       // 사용자 이름들을 가져와서
        userList << user;                       // 리스트에 추가

    foreach(QTcpSocket *client, clients)        // 모든 클라이언트에게 사용자 목록 전송
        client->write(QString("User:" + userList.join(",") + "\n").toUtf8());
}

ChatServer::~ChatServer()
{
    deleteLater();                              // 소멸자에서 메모리 누수를 방지
}
