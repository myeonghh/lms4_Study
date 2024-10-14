#include "widget.h"
#include "./ui_widget.h"
#include "loginwidget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    loginWidget = new Loginwidget();
    loginWidget->show();
}

Widget::~Widget()
{
    delete ui;
}
