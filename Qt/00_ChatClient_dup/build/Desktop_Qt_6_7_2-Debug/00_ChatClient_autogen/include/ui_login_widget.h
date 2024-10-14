/********************************************************************************
** Form generated from reading UI file 'login_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WIDGET_H
#define UI_LOGIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_widget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QFrame *frame_4;
    QPushButton *pushButton_4;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *login_widget)
    {
        if (login_widget->objectName().isEmpty())
            login_widget->setObjectName("login_widget");
        login_widget->resize(536, 492);
        gridLayout = new QGridLayout(login_widget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(login_widget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 50));
        frame->setBaseSize(QSize(0, 20));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(page);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(500, 400));
        frame_2->setBaseSize(QSize(500, 400));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout_2->addWidget(lineEdit_2, 0, 1, 1, 2);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 2);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 200));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout_2->addWidget(frame_3, 4, 0, 1, 3);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 50));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 10, 89, 25));

        gridLayout_2->addWidget(frame_4, 3, 2, 1, 1);


        verticalLayout_2->addWidget(frame_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(6, 9, 511, 461));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(login_widget);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(login_widget);
    } // setupUi

    void retranslateUi(QWidget *login_widget)
    {
        login_widget->setWindowTitle(QCoreApplication::translate("login_widget", "Form", nullptr));
        label->setText(QCoreApplication::translate("login_widget", "\354\233\271\355\210\260 \355\224\204\353\241\234\352\267\270\353\236\250", nullptr));
        label_2->setText(QCoreApplication::translate("login_widget", "\354\225\204\354\235\264\353\224\224", nullptr));
        label_3->setText(QCoreApplication::translate("login_widget", "\353\271\204\353\260\200\353\262\210\355\230\270", nullptr));
        pushButton->setText(QCoreApplication::translate("login_widget", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        pushButton_3->setText(QCoreApplication::translate("login_widget", "\354\225\204\354\235\264\353\224\224 \354\260\276\352\270\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login_widget", "\353\271\204\353\260\200\353\262\210\355\230\270 \354\260\276\352\270\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("login_widget", "\353\241\234\352\267\270\354\235\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("login_widget", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("login_widget", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_widget: public Ui_login_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WIDGET_H
