#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slot_clicked()));
}


void Widget::slot_clicked()
{
    qDebug() << "Hello world";
}



Widget::~Widget()
{
    delete ui;
}
