#include "loginwidget.h"
#include "ui_loginwidget.h"

Loginwidget::Loginwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Loginwidget)
{
    ui->setupUi(this);
}

Loginwidget::~Loginwidget()
{
    delete ui;
}
