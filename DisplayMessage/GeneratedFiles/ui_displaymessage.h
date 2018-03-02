/********************************************************************************
** Form generated from reading UI file 'displaymessage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYMESSAGE_H
#define UI_DISPLAYMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qvtkwidget.h>

QT_BEGIN_NAMESPACE

class Ui_DisplayMessageClass
{
public:
    QWidget *centralWidget;
    QVTKWidget *widget;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *openCloudButton;
    QPushButton *openTableButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *selectButton;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lowEdit;
    QLabel *label_2;
    QLineEdit *upEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *cloudFileDirEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *tableFileDirEdit;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *centerEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *planeNormalEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *radiusEdit;
    QVBoxLayout *verticalLayout_4;
    QPushButton *selectCenterButton;
    QPushButton *displayCenterButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DisplayMessageClass)
    {
        if (DisplayMessageClass->objectName().isEmpty())
            DisplayMessageClass->setObjectName(QStringLiteral("DisplayMessageClass"));
        DisplayMessageClass->resize(1663, 749);
        centralWidget = new QWidget(DisplayMessageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QVTKWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 512, 375));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(550, 20, 1082, 671));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 400, 511, 292));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        openCloudButton = new QPushButton(layoutWidget);
        openCloudButton->setObjectName(QStringLiteral("openCloudButton"));

        horizontalLayout_2->addWidget(openCloudButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        openTableButton = new QPushButton(layoutWidget);
        openTableButton->setObjectName(QStringLiteral("openTableButton"));

        verticalLayout_2->addWidget(openTableButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        selectButton = new QPushButton(layoutWidget);
        selectButton->setObjectName(QStringLiteral("selectButton"));

        horizontalLayout_3->addWidget(selectButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lowEdit = new QLineEdit(layoutWidget);
        lowEdit->setObjectName(QStringLiteral("lowEdit"));

        verticalLayout->addWidget(lowEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        upEdit = new QLineEdit(layoutWidget);
        upEdit->setObjectName(QStringLiteral("upEdit"));

        verticalLayout->addWidget(upEdit);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        cloudFileDirEdit = new QLineEdit(layoutWidget);
        cloudFileDirEdit->setObjectName(QStringLiteral("cloudFileDirEdit"));

        horizontalLayout->addWidget(cloudFileDirEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        tableFileDirEdit = new QLineEdit(layoutWidget);
        tableFileDirEdit->setObjectName(QStringLiteral("tableFileDirEdit"));

        horizontalLayout_4->addWidget(tableFileDirEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        centerEdit = new QLineEdit(layoutWidget);
        centerEdit->setObjectName(QStringLiteral("centerEdit"));

        horizontalLayout_5->addWidget(centerEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        planeNormalEdit = new QLineEdit(layoutWidget);
        planeNormalEdit->setObjectName(QStringLiteral("planeNormalEdit"));

        horizontalLayout_6->addWidget(planeNormalEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        radiusEdit = new QLineEdit(layoutWidget);
        radiusEdit->setObjectName(QStringLiteral("radiusEdit"));

        horizontalLayout_7->addWidget(radiusEdit);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        selectCenterButton = new QPushButton(layoutWidget);
        selectCenterButton->setObjectName(QStringLiteral("selectCenterButton"));

        verticalLayout_4->addWidget(selectCenterButton);

        displayCenterButton = new QPushButton(layoutWidget);
        displayCenterButton->setObjectName(QStringLiteral("displayCenterButton"));

        verticalLayout_4->addWidget(displayCenterButton);


        horizontalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_8);

        DisplayMessageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DisplayMessageClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1663, 23));
        DisplayMessageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DisplayMessageClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DisplayMessageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DisplayMessageClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DisplayMessageClass->setStatusBar(statusBar);

        retranslateUi(DisplayMessageClass);

        QMetaObject::connectSlotsByName(DisplayMessageClass);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayMessageClass)
    {
        DisplayMessageClass->setWindowTitle(QApplication::translate("DisplayMessageClass", "DisplayMessage", Q_NULLPTR));
        openCloudButton->setText(QApplication::translate("DisplayMessageClass", "\346\211\223\345\274\200\347\202\271\344\272\221", Q_NULLPTR));
        openTableButton->setText(QApplication::translate("DisplayMessageClass", "\346\211\223\345\274\200\346\225\260\346\215\256\350\241\250\346\240\274", Q_NULLPTR));
        selectButton->setText(QApplication::translate("DisplayMessageClass", "\347\255\233\351\200\211\346\225\260\346\215\256", Q_NULLPTR));
        label->setText(QApplication::translate("DisplayMessageClass", "\346\240\274\345\274\217\344\270\272yyyy-mm-dd hh-mm-ss", Q_NULLPTR));
        lowEdit->setText(QApplication::translate("DisplayMessageClass", "2018-01-01 00-00-00", Q_NULLPTR));
        label_2->setText(QApplication::translate("DisplayMessageClass", "\350\207\263", Q_NULLPTR));
        upEdit->setText(QApplication::translate("DisplayMessageClass", "2018-01-02 00-00-00", Q_NULLPTR));
        label_3->setText(QApplication::translate("DisplayMessageClass", "\347\202\271\344\272\221\346\226\207\344\273\266\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("DisplayMessageClass", "\350\241\250\346\240\274\346\226\207\344\273\266\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("DisplayMessageClass", "\345\234\206\345\277\203\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("DisplayMessageClass", "\345\271\263\351\235\242\346\263\225\347\237\242\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("DisplayMessageClass", "\345\215\212\345\276\204\357\274\232", Q_NULLPTR));
        selectCenterButton->setText(QApplication::translate("DisplayMessageClass", "\351\200\211\346\213\251\345\234\206\345\277\203", Q_NULLPTR));
        displayCenterButton->setText(QApplication::translate("DisplayMessageClass", "\346\230\276\347\244\272\345\234\206\345\277\203", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DisplayMessageClass: public Ui_DisplayMessageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYMESSAGE_H
