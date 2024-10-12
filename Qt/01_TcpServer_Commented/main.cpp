#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // [01] Widget w 위젯 객체 생성
    Widget w;
    w.setWindowTitle("TCP 서버");
    w.show();

    return a.exec();
}
