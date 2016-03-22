/********************************************************************************
** Form generated from reading UI file 'forwardkinematics.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORWARDKINEMATICS_H
#define UI_FORWARDKINEMATICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForwardKinematics
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonCalculate;
    QPushButton *pushButtonCancel;
    QTableWidget *tableWidgetParameters;
    QTableWidget *tableWidgetLinkTransMatrix;
    QPushButton *pushButtonLinkTransformationMatrix;
    QSpinBox *spinBox;
    QTableWidget *tableWidgetManipulatorMatrix;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidgetEndEffector;
    QLabel *label_3;
    QTableWidget *tableWidgetAngles;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuPUMA;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ForwardKinematics)
    {
        if (ForwardKinematics->objectName().isEmpty())
            ForwardKinematics->setObjectName(QStringLiteral("ForwardKinematics"));
        ForwardKinematics->resize(806, 507);
        centralWidget = new QWidget(ForwardKinematics);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonCalculate = new QPushButton(centralWidget);
        pushButtonCalculate->setObjectName(QStringLiteral("pushButtonCalculate"));
        pushButtonCalculate->setGeometry(QRect(530, 230, 151, 23));
        pushButtonCancel = new QPushButton(centralWidget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(690, 230, 75, 23));
        tableWidgetParameters = new QTableWidget(centralWidget);
        if (tableWidgetParameters->columnCount() < 6)
            tableWidgetParameters->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidgetParameters->rowCount() < 6)
            tableWidgetParameters->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetParameters->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetParameters->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetParameters->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetParameters->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetParameters->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetParameters->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(1, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(1, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(1, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(2, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(2, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(2, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(2, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(2, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(2, 5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(3, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(3, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(3, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(3, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(3, 4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(3, 5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(4, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(4, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(4, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(4, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(4, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(4, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(5, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(5, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(5, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(5, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(5, 4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidgetParameters->setItem(5, 5, __qtablewidgetitem47);
        tableWidgetParameters->setObjectName(QStringLiteral("tableWidgetParameters"));
        tableWidgetParameters->setGeometry(QRect(10, 10, 751, 211));
        tableWidgetParameters->setMinimumSize(QSize(631, 0));
        tableWidgetParameters->setLayoutDirection(Qt::LeftToRight);
        tableWidgetParameters->setProperty("showDropIndicator", QVariant(true));
        tableWidgetParameters->setTextElideMode(Qt::ElideRight);
        tableWidgetParameters->horizontalHeader()->setVisible(true);
        tableWidgetParameters->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetParameters->horizontalHeader()->setDefaultSectionSize(100);
        tableWidgetParameters->verticalHeader()->setVisible(false);
        tableWidgetLinkTransMatrix = new QTableWidget(centralWidget);
        if (tableWidgetLinkTransMatrix->columnCount() < 4)
            tableWidgetLinkTransMatrix->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setHorizontalHeaderItem(0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setHorizontalHeaderItem(1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setHorizontalHeaderItem(2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setHorizontalHeaderItem(3, __qtablewidgetitem51);
        if (tableWidgetLinkTransMatrix->rowCount() < 4)
            tableWidgetLinkTransMatrix->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setVerticalHeaderItem(0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setVerticalHeaderItem(1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setVerticalHeaderItem(2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidgetLinkTransMatrix->setVerticalHeaderItem(3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(0, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(0, 1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(0, 2, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(0, 3, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(1, 0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(1, 1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(1, 2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(1, 3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(2, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(2, 1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(2, 2, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(2, 3, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(3, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(3, 1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(3, 2, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetLinkTransMatrix->setItem(3, 3, __qtablewidgetitem71);
        tableWidgetLinkTransMatrix->setObjectName(QStringLiteral("tableWidgetLinkTransMatrix"));
        tableWidgetLinkTransMatrix->setGeometry(QRect(10, 300, 261, 151));
        tableWidgetLinkTransMatrix->horizontalHeader()->setDefaultSectionSize(60);
        pushButtonLinkTransformationMatrix = new QPushButton(centralWidget);
        pushButtonLinkTransformationMatrix->setObjectName(QStringLiteral("pushButtonLinkTransformationMatrix"));
        pushButtonLinkTransformationMatrix->setGeometry(QRect(180, 270, 91, 23));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(80, 270, 42, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(6);
        tableWidgetManipulatorMatrix = new QTableWidget(centralWidget);
        if (tableWidgetManipulatorMatrix->columnCount() < 4)
            tableWidgetManipulatorMatrix->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setHorizontalHeaderItem(0, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setHorizontalHeaderItem(1, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setHorizontalHeaderItem(2, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setHorizontalHeaderItem(3, __qtablewidgetitem75);
        if (tableWidgetManipulatorMatrix->rowCount() < 4)
            tableWidgetManipulatorMatrix->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setVerticalHeaderItem(0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setVerticalHeaderItem(1, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setVerticalHeaderItem(2, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidgetManipulatorMatrix->setVerticalHeaderItem(3, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        __qtablewidgetitem80->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(0, 0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        __qtablewidgetitem81->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(0, 1, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        __qtablewidgetitem82->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(0, 2, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        __qtablewidgetitem83->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(0, 3, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        __qtablewidgetitem84->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(1, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        __qtablewidgetitem85->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(1, 1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        __qtablewidgetitem86->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(1, 2, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        __qtablewidgetitem87->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(1, 3, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        __qtablewidgetitem88->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(2, 0, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        __qtablewidgetitem89->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(2, 1, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        __qtablewidgetitem90->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(2, 2, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        __qtablewidgetitem91->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(2, 3, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        __qtablewidgetitem92->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(3, 0, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        __qtablewidgetitem93->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(3, 1, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        __qtablewidgetitem94->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(3, 2, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        __qtablewidgetitem95->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetManipulatorMatrix->setItem(3, 3, __qtablewidgetitem95);
        tableWidgetManipulatorMatrix->setObjectName(QStringLiteral("tableWidgetManipulatorMatrix"));
        tableWidgetManipulatorMatrix->setGeometry(QRect(290, 300, 261, 151));
        tableWidgetManipulatorMatrix->horizontalHeader()->setDefaultSectionSize(60);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 250, 751, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 270, 71, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 270, 181, 21));
        tableWidgetEndEffector = new QTableWidget(centralWidget);
        if (tableWidgetEndEffector->columnCount() < 1)
            tableWidgetEndEffector->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidgetEndEffector->setHorizontalHeaderItem(0, __qtablewidgetitem96);
        if (tableWidgetEndEffector->rowCount() < 3)
            tableWidgetEndEffector->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidgetEndEffector->setVerticalHeaderItem(0, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidgetEndEffector->setVerticalHeaderItem(1, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableWidgetEndEffector->setVerticalHeaderItem(2, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        __qtablewidgetitem100->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetEndEffector->setItem(0, 0, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        __qtablewidgetitem101->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetEndEffector->setItem(1, 0, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        __qtablewidgetitem102->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetEndEffector->setItem(2, 0, __qtablewidgetitem102);
        tableWidgetEndEffector->setObjectName(QStringLiteral("tableWidgetEndEffector"));
        tableWidgetEndEffector->setGeometry(QRect(570, 300, 81, 151));
        tableWidgetEndEffector->horizontalHeader()->setDefaultSectionSize(60);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(570, 270, 101, 20));
        tableWidgetAngles = new QTableWidget(centralWidget);
        if (tableWidgetAngles->columnCount() < 1)
            tableWidgetAngles->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        tableWidgetAngles->setHorizontalHeaderItem(0, __qtablewidgetitem103);
        if (tableWidgetAngles->rowCount() < 3)
            tableWidgetAngles->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        tableWidgetAngles->setVerticalHeaderItem(0, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        tableWidgetAngles->setVerticalHeaderItem(1, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        tableWidgetAngles->setVerticalHeaderItem(2, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        __qtablewidgetitem107->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetAngles->setItem(0, 0, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        __qtablewidgetitem108->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetAngles->setItem(1, 0, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        __qtablewidgetitem109->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        tableWidgetAngles->setItem(2, 0, __qtablewidgetitem109);
        tableWidgetAngles->setObjectName(QStringLiteral("tableWidgetAngles"));
        tableWidgetAngles->setGeometry(QRect(680, 300, 91, 151));
        tableWidgetAngles->horizontalHeader()->setDefaultSectionSize(60);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(680, 270, 121, 20));
        ForwardKinematics->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ForwardKinematics);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 806, 21));
        menuPUMA = new QMenu(menuBar);
        menuPUMA->setObjectName(QStringLiteral("menuPUMA"));
        ForwardKinematics->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ForwardKinematics);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ForwardKinematics->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ForwardKinematics);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ForwardKinematics->setStatusBar(statusBar);

        menuBar->addAction(menuPUMA->menuAction());

        retranslateUi(ForwardKinematics);

        QMetaObject::connectSlotsByName(ForwardKinematics);
    } // setupUi

    void retranslateUi(QMainWindow *ForwardKinematics)
    {
        ForwardKinematics->setWindowTitle(QApplication::translate("ForwardKinematics", "ForwardKinematics", 0));
        pushButtonCalculate->setText(QApplication::translate("ForwardKinematics", "Run Forward Kinematics", 0));
        pushButtonCancel->setText(QApplication::translate("ForwardKinematics", "Cancel", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetParameters->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ForwardKinematics", "i", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetParameters->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ForwardKinematics", "\316\261i\342\210\2221 (degree)", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetParameters->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ForwardKinematics", "ai\342\210\2221 (in)", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetParameters->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ForwardKinematics", "di (in)", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetParameters->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ForwardKinematics", "\316\270i (degree)", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetParameters->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ForwardKinematics", "Range of \316\270i", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetParameters->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("ForwardKinematics", "1", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetParameters->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("ForwardKinematics", "2", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetParameters->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("ForwardKinematics", "3", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetParameters->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("ForwardKinematics", "4", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetParameters->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("ForwardKinematics", "5", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetParameters->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("ForwardKinematics", "6", 0));

        const bool __sortingEnabled = tableWidgetParameters->isSortingEnabled();
        tableWidgetParameters->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetParameters->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("ForwardKinematics", "1", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetParameters->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("ForwardKinematics", "0", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetParameters->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetParameters->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetParameters->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("ForwardKinematics", "60", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetParameters->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("ForwardKinematics", "-170 to 170", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetParameters->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("ForwardKinematics", "2", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetParameters->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("ForwardKinematics", "-90", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetParameters->item(1, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetParameters->item(1, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetParameters->item(1, 4);
        ___qtablewidgetitem22->setText(QApplication::translate("ForwardKinematics", "45", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidgetParameters->item(1, 5);
        ___qtablewidgetitem23->setText(QApplication::translate("ForwardKinematics", "-225 to 45", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidgetParameters->item(2, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("ForwardKinematics", "3", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidgetParameters->item(2, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("ForwardKinematics", "0", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidgetParameters->item(2, 2);
        ___qtablewidgetitem26->setText(QApplication::translate("ForwardKinematics", "17", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidgetParameters->item(2, 3);
        ___qtablewidgetitem27->setText(QApplication::translate("ForwardKinematics", "4.9", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidgetParameters->item(2, 4);
        ___qtablewidgetitem28->setText(QApplication::translate("ForwardKinematics", "25", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidgetParameters->item(2, 5);
        ___qtablewidgetitem29->setText(QApplication::translate("ForwardKinematics", "-250 to 75", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidgetParameters->item(3, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("ForwardKinematics", "4", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidgetParameters->item(3, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("ForwardKinematics", "-90", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidgetParameters->item(3, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("ForwardKinematics", "0.8", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidgetParameters->item(3, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("ForwardKinematics", "17.0", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidgetParameters->item(3, 4);
        ___qtablewidgetitem34->setText(QApplication::translate("ForwardKinematics", "15", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidgetParameters->item(3, 5);
        ___qtablewidgetitem35->setText(QApplication::translate("ForwardKinematics", "-135 to135", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidgetParameters->item(4, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("ForwardKinematics", "5", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidgetParameters->item(4, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("ForwardKinematics", "90", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidgetParameters->item(4, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidgetParameters->item(4, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidgetParameters->item(4, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("ForwardKinematics", "-10", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidgetParameters->item(4, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("ForwardKinematics", "-100 to 100", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidgetParameters->item(5, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("ForwardKinematics", "6", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidgetParameters->item(5, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("ForwardKinematics", "-90", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidgetParameters->item(5, 2);
        ___qtablewidgetitem44->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidgetParameters->item(5, 3);
        ___qtablewidgetitem45->setText(QApplication::translate("ForwardKinematics", "0.0", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidgetParameters->item(5, 4);
        ___qtablewidgetitem46->setText(QApplication::translate("ForwardKinematics", "-30", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidgetParameters->item(5, 5);
        ___qtablewidgetitem47->setText(QApplication::translate("ForwardKinematics", "-180 to 180", 0));
        tableWidgetParameters->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem48 = tableWidgetLinkTransMatrix->horizontalHeaderItem(0);
        ___qtablewidgetitem48->setText(QApplication::translate("ForwardKinematics", "X'", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidgetLinkTransMatrix->horizontalHeaderItem(1);
        ___qtablewidgetitem49->setText(QApplication::translate("ForwardKinematics", "Y'", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidgetLinkTransMatrix->horizontalHeaderItem(2);
        ___qtablewidgetitem50->setText(QApplication::translate("ForwardKinematics", "Z'", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidgetLinkTransMatrix->horizontalHeaderItem(3);
        ___qtablewidgetitem51->setText(QApplication::translate("ForwardKinematics", "P'", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidgetLinkTransMatrix->verticalHeaderItem(0);
        ___qtablewidgetitem52->setText(QApplication::translate("ForwardKinematics", "X", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidgetLinkTransMatrix->verticalHeaderItem(1);
        ___qtablewidgetitem53->setText(QApplication::translate("ForwardKinematics", "Y", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidgetLinkTransMatrix->verticalHeaderItem(2);
        ___qtablewidgetitem54->setText(QApplication::translate("ForwardKinematics", "Z", 0));

        const bool __sortingEnabled1 = tableWidgetLinkTransMatrix->isSortingEnabled();
        tableWidgetLinkTransMatrix->setSortingEnabled(false);
        tableWidgetLinkTransMatrix->setSortingEnabled(__sortingEnabled1);

        pushButtonLinkTransformationMatrix->setText(QApplication::translate("ForwardKinematics", "Calculate i-1T i", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidgetManipulatorMatrix->horizontalHeaderItem(0);
        ___qtablewidgetitem55->setText(QApplication::translate("ForwardKinematics", "X'", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidgetManipulatorMatrix->horizontalHeaderItem(1);
        ___qtablewidgetitem56->setText(QApplication::translate("ForwardKinematics", "Y'", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidgetManipulatorMatrix->horizontalHeaderItem(2);
        ___qtablewidgetitem57->setText(QApplication::translate("ForwardKinematics", "Z'", 0));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidgetManipulatorMatrix->horizontalHeaderItem(3);
        ___qtablewidgetitem58->setText(QApplication::translate("ForwardKinematics", "P'", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidgetManipulatorMatrix->verticalHeaderItem(0);
        ___qtablewidgetitem59->setText(QApplication::translate("ForwardKinematics", "X", 0));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidgetManipulatorMatrix->verticalHeaderItem(1);
        ___qtablewidgetitem60->setText(QApplication::translate("ForwardKinematics", "Y", 0));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidgetManipulatorMatrix->verticalHeaderItem(2);
        ___qtablewidgetitem61->setText(QApplication::translate("ForwardKinematics", "Z", 0));

        const bool __sortingEnabled2 = tableWidgetManipulatorMatrix->isSortingEnabled();
        tableWidgetManipulatorMatrix->setSortingEnabled(false);
        tableWidgetManipulatorMatrix->setSortingEnabled(__sortingEnabled2);

        label->setText(QApplication::translate("ForwardKinematics", "Link Number", 0));
        label_2->setText(QApplication::translate("ForwardKinematics", "Manipulator Transformation Matrix", 0));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidgetEndEffector->verticalHeaderItem(0);
        ___qtablewidgetitem62->setText(QApplication::translate("ForwardKinematics", "X", 0));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidgetEndEffector->verticalHeaderItem(1);
        ___qtablewidgetitem63->setText(QApplication::translate("ForwardKinematics", "Y", 0));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidgetEndEffector->verticalHeaderItem(2);
        ___qtablewidgetitem64->setText(QApplication::translate("ForwardKinematics", "Z", 0));

        const bool __sortingEnabled3 = tableWidgetEndEffector->isSortingEnabled();
        tableWidgetEndEffector->setSortingEnabled(false);
        tableWidgetEndEffector->setSortingEnabled(__sortingEnabled3);

        label_3->setText(QApplication::translate("ForwardKinematics", "End Effector Position", 0));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidgetAngles->verticalHeaderItem(0);
        ___qtablewidgetitem65->setText(QApplication::translate("ForwardKinematics", "\316\263", 0));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidgetAngles->verticalHeaderItem(1);
        ___qtablewidgetitem66->setText(QApplication::translate("ForwardKinematics", "\316\262", 0));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidgetAngles->verticalHeaderItem(2);
        ___qtablewidgetitem67->setText(QApplication::translate("ForwardKinematics", "\316\261", 0));

        const bool __sortingEnabled4 = tableWidgetAngles->isSortingEnabled();
        tableWidgetAngles->setSortingEnabled(false);
        tableWidgetAngles->setSortingEnabled(__sortingEnabled4);

        label_4->setText(QApplication::translate("ForwardKinematics", "Fixed Oriendation Angles", 0));
        menuPUMA->setTitle(QApplication::translate("ForwardKinematics", "PUMA", 0));
    } // retranslateUi

};

namespace Ui {
    class ForwardKinematics: public Ui_ForwardKinematics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORWARDKINEMATICS_H
