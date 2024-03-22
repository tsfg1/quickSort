/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication17.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION17_H
#define UI_QTWIDGETSAPPLICATION17_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication17Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication17Class)
    {
        if (QtWidgetsApplication17Class->objectName().isEmpty())
            QtWidgetsApplication17Class->setObjectName(QStringLiteral("QtWidgetsApplication17Class"));
        QtWidgetsApplication17Class->resize(600, 400);
        menuBar = new QMenuBar(QtWidgetsApplication17Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtWidgetsApplication17Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication17Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtWidgetsApplication17Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtWidgetsApplication17Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtWidgetsApplication17Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtWidgetsApplication17Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtWidgetsApplication17Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication17Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication17Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication17Class)
    {
        QtWidgetsApplication17Class->setWindowTitle(QApplication::translate("QtWidgetsApplication17Class", "QtWidgetsApplication17", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication17Class: public Ui_QtWidgetsApplication17Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION17_H
