#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>

namespace Ui {
class Loginwidget;
}

class Loginwidget : public QWidget
{
    Q_OBJECT

public:
    explicit Loginwidget(QWidget *parent = nullptr);
    ~Loginwidget();

private:
    Ui::Loginwidget *ui;
};

#endif // LOGINWIDGET_H
