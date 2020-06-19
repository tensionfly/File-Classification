/********************************************************************************
** Form generated from reading UI file 'fileclassification.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECLASSIFICATION_H
#define UI_FILECLASSIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileClassificationClass
{
public:
    QAction *action_open;
    QAction *action_CPU;
    QAction *action_GPU;
    QAction *action_out;
    QAction *action_tz;
    QWidget *centralWidget;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuDevice;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileClassificationClass)
    {
        if (FileClassificationClass->objectName().isEmpty())
            FileClassificationClass->setObjectName(QStringLiteral("FileClassificationClass"));
        FileClassificationClass->resize(563, 365);
        action_open = new QAction(FileClassificationClass);
        action_open->setObjectName(QStringLiteral("action_open"));
        action_CPU = new QAction(FileClassificationClass);
        action_CPU->setObjectName(QStringLiteral("action_CPU"));
        action_CPU->setCheckable(true);
        action_GPU = new QAction(FileClassificationClass);
        action_GPU->setObjectName(QStringLiteral("action_GPU"));
        action_GPU->setCheckable(true);
        action_out = new QAction(FileClassificationClass);
        action_out->setObjectName(QStringLiteral("action_out"));
        action_tz = new QAction(FileClassificationClass);
        action_tz->setObjectName(QStringLiteral("action_tz"));
        centralWidget = new QWidget(FileClassificationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 91, 21));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(120, 10, 391, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 170, 61, 23));
        plainTextEdit_2 = new QPlainTextEdit(centralWidget);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(120, 170, 391, 131));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 91, 20));
        plainTextEdit_3 = new QPlainTextEdit(centralWidget);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(120, 110, 391, 41));
        plainTextEdit_4 = new QPlainTextEdit(centralWidget);
        plainTextEdit_4->setObjectName(QStringLiteral("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(120, 60, 391, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 81, 21));
        FileClassificationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileClassificationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 563, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuDevice = new QMenu(menuBar);
        menuDevice->setObjectName(QStringLiteral("menuDevice"));
        FileClassificationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileClassificationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileClassificationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FileClassificationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileClassificationClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuDevice->menuAction());
        menuFile->addAction(action_open);
        menuFile->addAction(action_tz);
        menuFile->addAction(action_out);
        menuDevice->addAction(action_CPU);
        menuDevice->addAction(action_GPU);

        retranslateUi(FileClassificationClass);

        QMetaObject::connectSlotsByName(FileClassificationClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileClassificationClass)
    {
        FileClassificationClass->setWindowTitle(QApplication::translate("FileClassificationClass", "\346\226\207\346\241\243\346\231\272\350\203\275\346\225\264\347\220\206OCR\350\275\257\344\273\266", 0));
        action_open->setText(QApplication::translate("FileClassificationClass", "\350\276\223\345\205\245\346\226\207\346\241\243", 0));
        action_CPU->setText(QApplication::translate("FileClassificationClass", "CPU", 0));
        action_GPU->setText(QApplication::translate("FileClassificationClass", "GPU", 0));
        action_out->setText(QApplication::translate("FileClassificationClass", "\350\276\223\345\207\272\347\273\223\346\236\234", 0));
        action_tz->setText(QApplication::translate("FileClassificationClass", "\350\276\223\345\205\245\345\217\260\350\264\246", 0));
        label->setText(QApplication::translate("FileClassificationClass", "\350\276\223\345\205\245\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", 0));
        pushButton->setText(QApplication::translate("FileClassificationClass", "\345\244\204\347\220\206", 0));
        label_2->setText(QApplication::translate("FileClassificationClass", "\350\276\223\345\207\272\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204", 0));
        label_3->setText(QApplication::translate("FileClassificationClass", "\345\217\260\350\264\246\346\226\207\344\273\266\350\267\257\345\276\204", 0));
        menuFile->setTitle(QApplication::translate("FileClassificationClass", "\346\226\207\344\273\266", 0));
        menuDevice->setTitle(QApplication::translate("FileClassificationClass", "\350\256\276\345\244\207", 0));
    } // retranslateUi

};

namespace Ui {
    class FileClassificationClass: public Ui_FileClassificationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECLASSIFICATION_H
