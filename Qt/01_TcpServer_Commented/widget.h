// WIDGET_H이 정의되어 있지 않다면, 컴파일할 것
#ifndef WIDGET_H
// WIDGET_H 정의됨
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>

namespace Ui {
class Widget;
}

// [02] Widget class는 QWidget 상속
class Widget : public QWidget
{
    // Q_OBJECT: Qt 컴파일 하는 Meta object compiler(MOC)에게
    // 이 클래스는 큐티기반의 클래스라는 것을 알려주는 역할
    // 이 매크로를 지우면 signal, slot 등이 동작 안함
    Q_OBJECT

public:

    // [02.1]
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    // [02.7]
    QHostAddress getMyIP();

private:
    // ui로 우리가 만드는 모든 widget에 접근
    Ui::Widget *ui;
    QTcpServer *tcpServer;

    // [02.3]
    void initServ();

private slots:

    // [02.4]
    void slot_newConnection();
};

#endif // WIDGET_H
