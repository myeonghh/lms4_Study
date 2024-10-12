/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ipLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginButton;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName("LoginWidget");
        LoginWidget->resize(294, 104);
        verticalLayout = new QVBoxLayout(LoginWidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LoginWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(label);

        ipLineEdit = new QLineEdit(LoginWidget);
        ipLineEdit->setObjectName("ipLineEdit");

        horizontalLayout->addWidget(ipLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(LoginWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_2);

        nameLineEdit = new QLineEdit(LoginWidget);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        loginButton = new QPushButton(LoginWidget);
        loginButton->setObjectName("loginButton");

        horizontalLayout_3->addWidget(loginButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginWidget", "Server IP", nullptr));
        ipLineEdit->setText(QCoreApplication::translate("LoginWidget", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWidget", "User name", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWidget", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
