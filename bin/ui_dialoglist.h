/********************************************************************************
** Form generated from reading UI file 'dialoglist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLIST_H
#define UI_DIALOGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogList
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *vLayout;

    void setupUi(QWidget *DialogList)
    {
        if (DialogList->objectName().isEmpty())
            DialogList->setObjectName(QString::fromUtf8("DialogList"));
        DialogList->resize(250, 700);
        verticalLayout = new QVBoxLayout(DialogList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        toolBox = new QToolBox(DialogList);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 250, 665));
        vLayout = new QVBoxLayout(page);
        vLayout->setObjectName(QString::fromUtf8("vLayout"));
        toolBox->addItem(page, QString::fromUtf8("\347\276\244\346\210\220\345\221\230"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(DialogList);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogList);
    } // setupUi

    void retranslateUi(QWidget *DialogList)
    {
        DialogList->setWindowTitle(QCoreApplication::translate("DialogList", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("DialogList", "\347\276\244\346\210\220\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogList: public Ui_DialogList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLIST_H
