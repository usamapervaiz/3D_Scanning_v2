/********************************************************************************
** Form generated from reading UI file 'scannerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANNERWINDOW_H
#define UI_SCANNERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ScannerWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QFrame *viewPreviousScanWindowFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *previousScanWindowHomeButton;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QVTKWidget *qvtkWidget;
    QSpacerItem *horizontalSpacer_20;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QPushButton *openMeshButton;
    QPushButton *openPCDButton;
    QFrame *newScanFrame;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *newScanFrameHomeButton;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QVTKWidget *qvtkWidgetNewScan;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLineEdit *scanNameLineEdit;
    QPushButton *registerButon;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QRadioButton *gridradioButton;
    QRadioButton *triangradioButton;
    QLabel *label_6;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QDoubleSpinBox *meandoubleSpinBox;
    QLabel *label_8;
    QDoubleSpinBox *stddoubleSpinBox;
    QPushButton *filterButton;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *regFilterStatusLabel;
    QSpacerItem *horizontalSpacer_9;
    QFrame *homeFrame;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *openPreviousScanWindowButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *newScanWindowButton;
    QSpacerItem *horizontalSpacer_4;
    QFrame *CaliberationFrame;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *homeCalibrationButton;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_11;
    QFormLayout *formLayout_4;
    QLabel *label_12;
    QSlider *xMinSlider;
    QLabel *label_13;
    QSlider *yMinSlider;
    QLabel *label_14;
    QSlider *zMinSlider;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_17;
    QSlider *xMaxSlider;
    QSlider *yMaxSlider;
    QSlider *zMaxSlider;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLineEdit *toBeScanPersonNameLineEdit;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *recordButton;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_26;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_18;
    QLabel *scanStatusLabel;
    QSpacerItem *horizontalSpacer_27;
    QVBoxLayout *verticalLayout_6;
    QPushButton *nextCalibrationButton;
    QLabel *label_21;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScannerWindow)
    {
        if (ScannerWindow->objectName().isEmpty())
            ScannerWindow->setObjectName(QStringLiteral("ScannerWindow"));
        ScannerWindow->resize(854, 1670);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/Icon_3D.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ScannerWindow->setWindowIcon(icon);
        ScannerWindow->setAutoFillBackground(true);
        ScannerWindow->setIconSize(QSize(30, 30));
        centralWidget = new QWidget(ScannerWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        viewPreviousScanWindowFrame = new QFrame(centralWidget);
        viewPreviousScanWindowFrame->setObjectName(QStringLiteral("viewPreviousScanWindowFrame"));
        viewPreviousScanWindowFrame->setEnabled(true);
        viewPreviousScanWindowFrame->setFrameShape(QFrame::StyledPanel);
        viewPreviousScanWindowFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(viewPreviousScanWindowFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        previousScanWindowHomeButton = new QPushButton(viewPreviousScanWindowFrame);
        previousScanWindowHomeButton->setObjectName(QStringLiteral("previousScanWindowHomeButton"));
        previousScanWindowHomeButton->setMinimumSize(QSize(40, 40));
        previousScanWindowHomeButton->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 127);\n"
" border-style: none;\n"
" border-width:1px;\n"
" border-color: red;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/back-alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        previousScanWindowHomeButton->setIcon(icon1);

        horizontalLayout_5->addWidget(previousScanWindowHomeButton);

        label_4 = new QLabel(viewPreviousScanWindowFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 75 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        qvtkWidget = new QVTKWidget(viewPreviousScanWindowFrame);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qvtkWidget->sizePolicy().hasHeightForWidth());
        qvtkWidget->setSizePolicy(sizePolicy);
        qvtkWidget->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));

        horizontalLayout_6->addWidget(qvtkWidget);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_20);

        groupBox_2 = new QGroupBox(viewPreviousScanWindowFrame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        openMeshButton = new QPushButton(groupBox_2);
        openMeshButton->setObjectName(QStringLiteral("openMeshButton"));
        openMeshButton->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, openMeshButton);

        openPCDButton = new QPushButton(groupBox_2);
        openPCDButton->setObjectName(QStringLiteral("openPCDButton"));
        openPCDButton->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, openPCDButton);


        horizontalLayout_6->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(viewPreviousScanWindowFrame);

        newScanFrame = new QFrame(centralWidget);
        newScanFrame->setObjectName(QStringLiteral("newScanFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(newScanFrame->sizePolicy().hasHeightForWidth());
        newScanFrame->setSizePolicy(sizePolicy2);
        newScanFrame->setFrameShape(QFrame::StyledPanel);
        newScanFrame->setFrameShadow(QFrame::Raised);
        newScanFrame->setLineWidth(-1);
        verticalLayout_9 = new QVBoxLayout(newScanFrame);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        newScanFrameHomeButton = new QPushButton(newScanFrame);
        newScanFrameHomeButton->setObjectName(QStringLiteral("newScanFrameHomeButton"));
        newScanFrameHomeButton->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 127);\n"
" border-style: none;\n"
" border-width:1px;\n"
" border-color: red;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        newScanFrameHomeButton->setIcon(icon1);

        horizontalLayout_3->addWidget(newScanFrameHomeButton);

        label_5 = new QLabel(newScanFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 75 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        qvtkWidgetNewScan = new QVTKWidget(newScanFrame);
        qvtkWidgetNewScan->setObjectName(QStringLiteral("qvtkWidgetNewScan"));
        sizePolicy.setHeightForWidth(qvtkWidgetNewScan->sizePolicy().hasHeightForWidth());
        qvtkWidgetNewScan->setSizePolicy(sizePolicy);
        qvtkWidgetNewScan->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(qvtkWidgetNewScan);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(newScanFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        scanNameLineEdit = new QLineEdit(groupBox);
        scanNameLineEdit->setObjectName(QStringLiteral("scanNameLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, scanNameLineEdit);


        verticalLayout_2->addLayout(formLayout_3);

        registerButon = new QPushButton(groupBox);
        registerButon->setObjectName(QStringLiteral("registerButon"));
        registerButon->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));

        verticalLayout_2->addWidget(registerButon);


        verticalLayout_4->addWidget(groupBox);

        groupBox_4 = new QGroupBox(newScanFrame);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        gridradioButton = new QRadioButton(groupBox_4);
        gridradioButton->setObjectName(QStringLiteral("gridradioButton"));
        gridradioButton->setChecked(true);

        verticalLayout_3->addWidget(gridradioButton);

        triangradioButton = new QRadioButton(groupBox_4);
        triangradioButton->setObjectName(QStringLiteral("triangradioButton"));

        verticalLayout_3->addWidget(triangradioButton);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        meandoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        meandoubleSpinBox->setObjectName(QStringLiteral("meandoubleSpinBox"));
        meandoubleSpinBox->setMinimum(10);
        meandoubleSpinBox->setSingleStep(1);
        meandoubleSpinBox->setValue(50);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, meandoubleSpinBox);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        stddoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        stddoubleSpinBox->setObjectName(QStringLiteral("stddoubleSpinBox"));
        stddoubleSpinBox->setMaximum(10);
        stddoubleSpinBox->setSingleStep(0.5);
        stddoubleSpinBox->setValue(1.5);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, stddoubleSpinBox);


        verticalLayout_3->addLayout(formLayout_2);

        filterButton = new QPushButton(groupBox_4);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));

        verticalLayout_3->addWidget(filterButton);


        verticalLayout_4->addWidget(groupBox_4);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        regFilterStatusLabel = new QLabel(newScanFrame);
        regFilterStatusLabel->setObjectName(QStringLiteral("regFilterStatusLabel"));

        horizontalLayout_10->addWidget(regFilterStatusLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout_9->addLayout(horizontalLayout_10);


        verticalLayout_7->addWidget(newScanFrame);

        homeFrame = new QFrame(centralWidget);
        homeFrame->setObjectName(QStringLiteral("homeFrame"));
        homeFrame->setFrameShape(QFrame::StyledPanel);
        homeFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(homeFrame);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        openPreviousScanWindowButton = new QPushButton(homeFrame);
        openPreviousScanWindowButton->setObjectName(QStringLiteral("openPreviousScanWindowButton"));
        openPreviousScanWindowButton->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(170, 170, 255);"));

        horizontalLayout->addWidget(openPreviousScanWindowButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_15->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        newScanWindowButton = new QPushButton(homeFrame);
        newScanWindowButton->setObjectName(QStringLiteral("newScanWindowButton"));
        newScanWindowButton->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));

        horizontalLayout_2->addWidget(newScanWindowButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_15->addLayout(horizontalLayout_2);


        verticalLayout_7->addWidget(homeFrame);

        CaliberationFrame = new QFrame(centralWidget);
        CaliberationFrame->setObjectName(QStringLiteral("CaliberationFrame"));
        CaliberationFrame->setFrameShape(QFrame::StyledPanel);
        CaliberationFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(CaliberationFrame);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        homeCalibrationButton = new QPushButton(CaliberationFrame);
        homeCalibrationButton->setObjectName(QStringLiteral("homeCalibrationButton"));
        homeCalibrationButton->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 127);\n"
" border-style: none;\n"
" border-width:1px;\n"
" border-color: red;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        homeCalibrationButton->setIcon(icon1);

        horizontalLayout_14->addWidget(homeCalibrationButton);

        label_16 = new QLabel(CaliberationFrame);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_14->addWidget(label_16);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_17);


        verticalLayout_17->addLayout(horizontalLayout_14);

        verticalSpacer_2 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_2);

        groupBox_3 = new QGroupBox(CaliberationFrame);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QStringLiteral("border-color: rgb(170, 170, 255);"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_12->addWidget(label_11);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("\n"
"font: 10pt \"MS Shell Dlg 2\";"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        xMinSlider = new QSlider(groupBox_3);
        xMinSlider->setObjectName(QStringLiteral("xMinSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(xMinSlider->sizePolicy().hasHeightForWidth());
        xMinSlider->setSizePolicy(sizePolicy3);
        xMinSlider->setMinimum(-20);
        xMinSlider->setMaximum(0);
        xMinSlider->setSingleStep(1);
        xMinSlider->setPageStep(1);
        xMinSlider->setValue(-5);
        xMinSlider->setSliderPosition(-5);
        xMinSlider->setOrientation(Qt::Horizontal);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, xMinSlider);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        yMinSlider = new QSlider(groupBox_3);
        yMinSlider->setObjectName(QStringLiteral("yMinSlider"));
        sizePolicy3.setHeightForWidth(yMinSlider->sizePolicy().hasHeightForWidth());
        yMinSlider->setSizePolicy(sizePolicy3);
        yMinSlider->setMinimum(-120);
        yMinSlider->setMaximum(0);
        yMinSlider->setSingleStep(1);
        yMinSlider->setPageStep(1);
        yMinSlider->setSliderPosition(-10);
        yMinSlider->setOrientation(Qt::Horizontal);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, yMinSlider);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_14);

        zMinSlider = new QSlider(groupBox_3);
        zMinSlider->setObjectName(QStringLiteral("zMinSlider"));
        sizePolicy3.setHeightForWidth(zMinSlider->sizePolicy().hasHeightForWidth());
        zMinSlider->setSizePolicy(sizePolicy3);
        zMinSlider->setMinimum(-20);
        zMinSlider->setMaximum(0);
        zMinSlider->setSingleStep(1);
        zMinSlider->setPageStep(1);
        zMinSlider->setValue(0);
        zMinSlider->setSliderPosition(0);
        zMinSlider->setOrientation(Qt::Horizontal);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, zMinSlider);


        verticalLayout_12->addLayout(formLayout_4);


        horizontalLayout_15->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_11->addWidget(label_17);

        xMaxSlider = new QSlider(groupBox_3);
        xMaxSlider->setObjectName(QStringLiteral("xMaxSlider"));
        sizePolicy3.setHeightForWidth(xMaxSlider->sizePolicy().hasHeightForWidth());
        xMaxSlider->setSizePolicy(sizePolicy3);
        xMaxSlider->setMinimum(0);
        xMaxSlider->setMaximum(20);
        xMaxSlider->setSingleStep(1);
        xMaxSlider->setPageStep(1);
        xMaxSlider->setValue(5);
        xMaxSlider->setSliderPosition(5);
        xMaxSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(xMaxSlider);

        yMaxSlider = new QSlider(groupBox_3);
        yMaxSlider->setObjectName(QStringLiteral("yMaxSlider"));
        sizePolicy3.setHeightForWidth(yMaxSlider->sizePolicy().hasHeightForWidth());
        yMaxSlider->setSizePolicy(sizePolicy3);
        yMaxSlider->setMinimum(0);
        yMaxSlider->setMaximum(120);
        yMaxSlider->setSingleStep(1);
        yMaxSlider->setPageStep(1);
        yMaxSlider->setValue(10);
        yMaxSlider->setSliderPosition(10);
        yMaxSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(yMaxSlider);

        zMaxSlider = new QSlider(groupBox_3);
        zMaxSlider->setObjectName(QStringLiteral("zMaxSlider"));
        sizePolicy3.setHeightForWidth(zMaxSlider->sizePolicy().hasHeightForWidth());
        zMaxSlider->setSizePolicy(sizePolicy3);
        zMaxSlider->setMinimum(0);
        zMaxSlider->setMaximum(40);
        zMaxSlider->setSingleStep(1);
        zMaxSlider->setPageStep(1);
        zMaxSlider->setValue(25);
        zMaxSlider->setSliderPosition(25);
        zMaxSlider->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(zMaxSlider);


        horizontalLayout_15->addLayout(verticalLayout_11);


        verticalLayout_5->addLayout(horizontalLayout_15);


        verticalLayout_17->addWidget(groupBox_3);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_3);

        groupBox_5 = new QGroupBox(CaliberationFrame);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(label_15);

        toBeScanPersonNameLineEdit = new QLineEdit(groupBox_5);
        toBeScanPersonNameLineEdit->setObjectName(QStringLiteral("toBeScanPersonNameLineEdit"));
        toBeScanPersonNameLineEdit->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
""));

        horizontalLayout_8->addWidget(toBeScanPersonNameLineEdit);

        horizontalSpacer_25 = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_25);

        recordButton = new QPushButton(groupBox_5);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        recordButton->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(recordButton);

        horizontalSpacer_28 = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_28);


        verticalLayout_17->addWidget(groupBox_5);

        verticalSpacer = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_26);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_18 = new QLabel(CaliberationFrame);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(251, 252, 255);"));

        verticalLayout_14->addWidget(label_18);

        scanStatusLabel = new QLabel(CaliberationFrame);
        scanStatusLabel->setObjectName(QStringLiteral("scanStatusLabel"));
        scanStatusLabel->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_14->addWidget(scanStatusLabel);


        horizontalLayout_17->addLayout(verticalLayout_14);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_27);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        nextCalibrationButton = new QPushButton(CaliberationFrame);
        nextCalibrationButton->setObjectName(QStringLiteral("nextCalibrationButton"));
        nextCalibrationButton->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_6->addWidget(nextCalibrationButton);

        label_21 = new QLabel(CaliberationFrame);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_6->addWidget(label_21);


        horizontalLayout_17->addLayout(verticalLayout_6);


        verticalLayout_17->addLayout(horizontalLayout_17);


        verticalLayout_7->addWidget(CaliberationFrame);

        ScannerWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ScannerWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 854, 21));
        ScannerWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScannerWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ScannerWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ScannerWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ScannerWindow->setStatusBar(statusBar);

        retranslateUi(ScannerWindow);

        QMetaObject::connectSlotsByName(ScannerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ScannerWindow)
    {
        ScannerWindow->setWindowTitle(QString());
        previousScanWindowHomeButton->setText(QString());
        label_4->setText(QApplication::translate("ScannerWindow", "HOME", 0));
#ifndef QT_NO_TOOLTIP
        qvtkWidget->setToolTip(QApplication::translate("ScannerWindow", "VTK Widget", 0));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QString());
        openMeshButton->setText(QApplication::translate("ScannerWindow", "Open Mesh File", 0));
        openPCDButton->setText(QApplication::translate("ScannerWindow", "Open PCD File", 0));
        newScanFrameHomeButton->setText(QString());
        label_5->setText(QApplication::translate("ScannerWindow", "HOME", 0));
        groupBox->setTitle(QApplication::translate("ScannerWindow", "Image Registration ", 0));
        label->setText(QApplication::translate("ScannerWindow", "Name of file", 0));
        registerButon->setText(QApplication::translate("ScannerWindow", "Registration", 0));
        groupBox_4->setTitle(QApplication::translate("ScannerWindow", "Filtering and Surface Reconstruction", 0));
        label_2->setText(QApplication::translate("ScannerWindow", "Reconstruction Method:", 0));
        gridradioButton->setText(QApplication::translate("ScannerWindow", "Grid Projection", 0));
        triangradioButton->setText(QApplication::translate("ScannerWindow", "Greedy Projection Triangulation", 0));
        label_6->setText(QApplication::translate("ScannerWindow", "Outlier Removal FilterParameters:", 0));
        label_7->setText(QApplication::translate("ScannerWindow", "Mean", 0));
        label_8->setText(QApplication::translate("ScannerWindow", "STD", 0));
        filterButton->setText(QApplication::translate("ScannerWindow", "3D Reconstruction and Filter", 0));
        regFilterStatusLabel->setText(QApplication::translate("ScannerWindow", "Waiting", 0));
        openPreviousScanWindowButton->setText(QApplication::translate("ScannerWindow", "RECENT     PROJECTS", 0));
        newScanWindowButton->setText(QApplication::translate("ScannerWindow", "START NEW PROJECT", 0));
        homeCalibrationButton->setText(QString());
        label_16->setText(QApplication::translate("ScannerWindow", "Home", 0));
        groupBox_3->setTitle(QApplication::translate("ScannerWindow", "Pass Through Filter Control Parameters", 0));
        label_11->setText(QApplication::translate("ScannerWindow", "                                                       Minimum", 0));
        label_12->setText(QApplication::translate("ScannerWindow", "  X", 0));
        label_13->setText(QApplication::translate("ScannerWindow", "  Y   ", 0));
        label_14->setText(QApplication::translate("ScannerWindow", "  Z", 0));
        label_17->setText(QApplication::translate("ScannerWindow", "                                                       Maximum", 0));
        groupBox_5->setTitle(QApplication::translate("ScannerWindow", " Recording", 0));
        label_15->setText(QApplication::translate("ScannerWindow", "Enter Name:", 0));
        recordButton->setText(QApplication::translate("ScannerWindow", "RECORD", 0));
        label_18->setText(QApplication::translate("ScannerWindow", "            Status", 0));
        scanStatusLabel->setText(QApplication::translate("ScannerWindow", "Scanner Calibration.....", 0));
        nextCalibrationButton->setText(QApplication::translate("ScannerWindow", "Next", 0));
        label_21->setText(QApplication::translate("ScannerWindow", "3D Model and Filtering", 0));
    } // retranslateUi

};

namespace Ui {
    class ScannerWindow: public Ui_ScannerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANNERWINDOW_H
