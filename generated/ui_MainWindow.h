/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *controls;
    QGridLayout *gridLayout_2;
    QProgressBar *progressBar;
    QLabel *labelTop;
    QGridLayout *glLayout;
    QFrame *line;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_FieldOfView;
    QLabel *label_3;
    QComboBox *switch_projection;
    QSlider *slider_FieldOfView;
    QDoubleSpinBox *box_nearPlane;
    QLabel *label_12;
    QDoubleSpinBox *box_FarPlane;
    QGroupBox *groupBox_2;
    QComboBox *switch_renderingMode;
    QLabel *label_renderingMode;
    QGroupBox *groupBox_5;
    QLabel *label_9;
    QLCDNumber *usedMemLCD;
    QLabel *label_10;
    QLabel *label_11;
    QLCDNumber *memSizeLCD;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1183, 928);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        controls = new QWidget(centralwidget);
        controls->setObjectName(QStringLiteral("controls"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(controls->sizePolicy().hasHeightForWidth());
        controls->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(controls);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        progressBar = new QProgressBar(controls);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        gridLayout_2->addWidget(progressBar, 2, 1, 1, 1);

        labelTop = new QLabel(controls);
        labelTop->setObjectName(QStringLiteral("labelTop"));

        gridLayout_2->addWidget(labelTop, 2, 0, 1, 1);


        gridLayout->addWidget(controls, 0, 0, 1, 1);

        glLayout = new QGridLayout();
        glLayout->setObjectName(QStringLiteral("glLayout"));

        gridLayout->addLayout(glLayout, 2, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        widget_2->setMinimumSize(QSize(250, 0));
        widget_2->setMaximumSize(QSize(200, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 47, 13));
        label_FieldOfView = new QLabel(groupBox);
        label_FieldOfView->setObjectName(QStringLiteral("label_FieldOfView"));
        label_FieldOfView->setGeometry(QRect(20, 60, 71, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 61, 16));
        switch_projection = new QComboBox(groupBox);
        switch_projection->setObjectName(QStringLiteral("switch_projection"));
        switch_projection->setGeometry(QRect(100, 30, 111, 22));
        slider_FieldOfView = new QSlider(groupBox);
        slider_FieldOfView->setObjectName(QStringLiteral("slider_FieldOfView"));
        slider_FieldOfView->setGeometry(QRect(100, 60, 111, 22));
        slider_FieldOfView->setMinimum(1);
        slider_FieldOfView->setMaximum(179);
        slider_FieldOfView->setValue(45);
        slider_FieldOfView->setOrientation(Qt::Horizontal);
        box_nearPlane = new QDoubleSpinBox(groupBox);
        box_nearPlane->setObjectName(QStringLiteral("box_nearPlane"));
        box_nearPlane->setGeometry(QRect(100, 90, 111, 22));
        box_nearPlane->setMinimum(0.01);
        box_nearPlane->setSingleStep(0.1);
        box_nearPlane->setValue(0.1);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 120, 51, 16));
        box_FarPlane = new QDoubleSpinBox(groupBox);
        box_FarPlane->setObjectName(QStringLiteral("box_FarPlane"));
        box_FarPlane->setGeometry(QRect(100, 120, 111, 22));
        box_FarPlane->setMaximum(50000);
        box_FarPlane->setSingleStep(0.1);
        box_FarPlane->setValue(500);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        switch_renderingMode = new QComboBox(groupBox_2);
        switch_renderingMode->setObjectName(QStringLiteral("switch_renderingMode"));
        switch_renderingMode->setGeometry(QRect(100, 30, 111, 22));
        label_renderingMode = new QLabel(groupBox_2);
        label_renderingMode->setObjectName(QStringLiteral("label_renderingMode"));
        label_renderingMode->setGeometry(QRect(20, 30, 47, 20));

        verticalLayout->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(widget_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 60, 91, 16));
        usedMemLCD = new QLCDNumber(groupBox_5);
        usedMemLCD->setObjectName(QStringLiteral("usedMemLCD"));
        usedMemLCD->setGeometry(QRect(110, 60, 64, 23));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 20, 51, 21));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 20, 91, 21));
        memSizeLCD = new QLCDNumber(groupBox_5);
        memSizeLCD->setObjectName(QStringLiteral("memSizeLCD"));
        memSizeLCD->setGeometry(QRect(110, 20, 64, 23));
        memSizeLCD->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout->addWidget(groupBox_5);


        gridLayout->addWidget(widget_2, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1183, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Visualisierung 1", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open ...", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        labelTop->setText(QApplication::translate("MainWindow", "No data loaded", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Camera", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Projection", Q_NULLPTR));
        label_FieldOfView->setText(QApplication::translate("MainWindow", "Field Of View", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Near Plane", Q_NULLPTR));
        switch_projection->clear();
        switch_projection->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Perspective", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Orthographic", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("MainWindow", "Far Plane", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Rendering", Q_NULLPTR));
        switch_renderingMode->clear();
        switch_renderingMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Front Faces", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Back Faces", Q_NULLPTR)
         << QApplication::translate("MainWindow", "MIP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Alpha-Compositing", Q_NULLPTR)
        );
        label_renderingMode->setText(QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "GPU", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Used Memory (MB)", Q_NULLPTR));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Total Memory (MB)", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
