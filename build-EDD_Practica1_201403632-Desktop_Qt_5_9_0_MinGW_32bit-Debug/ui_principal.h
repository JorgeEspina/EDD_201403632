/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralWidget;
    QGroupBox *gbDatos;
    QPushButton *btnSiguienteTurno;
    QPushButton *btnSimulacion;
    QPlainTextEdit *txtAviones;
    QPlainTextEdit *txtTurnos;
    QPushButton *btnP;
    QPushButton *btnAviones;
    QLabel *lblLlegadaAviones;
    QLabel *lblDesabordaje;
    QPushButton *btnDesabordaje;
    QPushButton *btnEquipaje;
    QLabel *lblEquipaje;
    QPushButton *btnEscritoriosRegistro;
    QLabel *lblEscritorioRegistro;
    QLabel *lblMantenimiento;
    QPushButton *btnMantenimiento;
    QLabel *lblDocumentosPasajero;
    QPushButton *btnDocumentos;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(1920, 1080);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Principal->setPalette(palette);
        centralWidget = new QWidget(Principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gbDatos = new QGroupBox(centralWidget);
        gbDatos->setObjectName(QStringLiteral("gbDatos"));
        gbDatos->setGeometry(QRect(10, 10, 1001, 131));
        btnSiguienteTurno = new QPushButton(gbDatos);
        btnSiguienteTurno->setObjectName(QStringLiteral("btnSiguienteTurno"));
        btnSiguienteTurno->setGeometry(QRect(860, 30, 111, 91));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Recursos/if_arrow_play_button_next_right_previous_1076765.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSiguienteTurno->setIcon(icon);
        btnSiguienteTurno->setIconSize(QSize(90, 90));
        btnSiguienteTurno->setFlat(true);
        btnSimulacion = new QPushButton(gbDatos);
        btnSimulacion->setObjectName(QStringLiteral("btnSimulacion"));
        btnSimulacion->setGeometry(QRect(720, 30, 111, 91));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        btnSimulacion->setFont(font);
        btnSimulacion->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Recursos/if_Solution_2698219.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSimulacion->setIcon(icon1);
        btnSimulacion->setIconSize(QSize(90, 90));
        btnSimulacion->setFlat(true);
        txtAviones = new QPlainTextEdit(gbDatos);
        txtAviones->setObjectName(QStringLiteral("txtAviones"));
        txtAviones->setGeometry(QRect(160, 60, 261, 31));
        txtTurnos = new QPlainTextEdit(gbDatos);
        txtTurnos->setObjectName(QStringLiteral("txtTurnos"));
        txtTurnos->setGeometry(QRect(430, 60, 261, 31));
        btnP = new QPushButton(gbDatos);
        btnP->setObjectName(QStringLiteral("btnP"));
        btnP->setGeometry(QRect(10, 30, 111, 91));
        btnP->setFont(font);
        btnP->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Recursos/if_Airport_22906.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnP->setIcon(icon2);
        btnP->setIconSize(QSize(90, 90));
        btnP->setFlat(true);
        btnSiguienteTurno->raise();
        btnSimulacion->raise();
        txtAviones->raise();
        txtTurnos->raise();
        btnP->raise();
        btnAviones = new QPushButton(centralWidget);
        btnAviones->setObjectName(QStringLiteral("btnAviones"));
        btnAviones->setGeometry(QRect(0, 140, 221, 91));
        btnAviones->setFont(font);
        btnAviones->setLayoutDirection(Qt::LeftToRight);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Recursos/if_airplane_1120625.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAviones->setIcon(icon3);
        btnAviones->setIconSize(QSize(90, 90));
        btnAviones->setFlat(true);
        lblLlegadaAviones = new QLabel(centralWidget);
        lblLlegadaAviones->setObjectName(QStringLiteral("lblLlegadaAviones"));
        lblLlegadaAviones->setGeometry(QRect(10, 250, 201, 531));
        lblLlegadaAviones->setScaledContents(true);
        lblDesabordaje = new QLabel(centralWidget);
        lblDesabordaje->setObjectName(QStringLiteral("lblDesabordaje"));
        lblDesabordaje->setGeometry(QRect(230, 250, 211, 531));
        lblDesabordaje->setScaledContents(true);
        btnDesabordaje = new QPushButton(centralWidget);
        btnDesabordaje->setObjectName(QStringLiteral("btnDesabordaje"));
        btnDesabordaje->setGeometry(QRect(250, 140, 181, 91));
        btnDesabordaje->setFont(font);
        btnDesabordaje->setLayoutDirection(Qt::LeftToRight);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Recursos/if_5332_-_MySpace_1314245.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDesabordaje->setIcon(icon4);
        btnDesabordaje->setIconSize(QSize(90, 90));
        btnDesabordaje->setFlat(true);
        btnEquipaje = new QPushButton(centralWidget);
        btnEquipaje->setObjectName(QStringLiteral("btnEquipaje"));
        btnEquipaje->setGeometry(QRect(20, 840, 251, 91));
        btnEquipaje->setFont(font);
        btnEquipaje->setLayoutDirection(Qt::LeftToRight);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Recursos/if_luggage_416411.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEquipaje->setIcon(icon5);
        btnEquipaje->setIconSize(QSize(90, 90));
        btnEquipaje->setFlat(true);
        lblEquipaje = new QLabel(centralWidget);
        lblEquipaje->setObjectName(QStringLiteral("lblEquipaje"));
        lblEquipaje->setGeometry(QRect(290, 800, 1381, 181));
        lblEquipaje->setScaledContents(true);
        btnEscritoriosRegistro = new QPushButton(centralWidget);
        btnEscritoriosRegistro->setObjectName(QStringLiteral("btnEscritoriosRegistro"));
        btnEscritoriosRegistro->setGeometry(QRect(1020, 70, 251, 91));
        btnEscritoriosRegistro->setFont(font);
        btnEscritoriosRegistro->setLayoutDirection(Qt::LeftToRight);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Recursos/if_support_2698217.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEscritoriosRegistro->setIcon(icon6);
        btnEscritoriosRegistro->setIconSize(QSize(90, 90));
        btnEscritoriosRegistro->setFlat(true);
        lblEscritorioRegistro = new QLabel(centralWidget);
        lblEscritorioRegistro->setObjectName(QStringLiteral("lblEscritorioRegistro"));
        lblEscritorioRegistro->setGeometry(QRect(730, 190, 631, 591));
        lblEscritorioRegistro->setScaledContents(true);
        lblMantenimiento = new QLabel(centralWidget);
        lblMantenimiento->setObjectName(QStringLiteral("lblMantenimiento"));
        lblMantenimiento->setGeometry(QRect(1380, 190, 531, 591));
        lblMantenimiento->setScaledContents(true);
        btnMantenimiento = new QPushButton(centralWidget);
        btnMantenimiento->setObjectName(QStringLiteral("btnMantenimiento"));
        btnMantenimiento->setGeometry(QRect(1550, 70, 251, 91));
        btnMantenimiento->setFont(font);
        btnMantenimiento->setLayoutDirection(Qt::LeftToRight);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Recursos/if_CarRepair_22908.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMantenimiento->setIcon(icon7);
        btnMantenimiento->setIconSize(QSize(90, 90));
        btnMantenimiento->setFlat(true);
        lblDocumentosPasajero = new QLabel(centralWidget);
        lblDocumentosPasajero->setObjectName(QStringLiteral("lblDocumentosPasajero"));
        lblDocumentosPasajero->setGeometry(QRect(470, 250, 221, 531));
        lblDocumentosPasajero->setScaledContents(true);
        btnDocumentos = new QPushButton(centralWidget);
        btnDocumentos->setObjectName(QStringLiteral("btnDocumentos"));
        btnDocumentos->setGeometry(QRect(460, 140, 251, 91));
        btnDocumentos->setFont(font);
        btnDocumentos->setLayoutDirection(Qt::LeftToRight);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Recursos/if_37_document_584879.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDocumentos->setIcon(icon8);
        btnDocumentos->setIconSize(QSize(90, 90));
        btnDocumentos->setFlat(true);
        Principal->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Principal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Principal->setStatusBar(statusBar);

        retranslateUi(Principal);

        btnSiguienteTurno->setDefault(false);


        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", Q_NULLPTR));
        gbDatos->setTitle(QApplication::translate("Principal", "Datos a Ingresar", Q_NULLPTR));
        btnSiguienteTurno->setText(QString());
        btnSimulacion->setText(QString());
        txtAviones->setDocumentTitle(QString());
        txtAviones->setPlainText(QString());
        txtAviones->setPlaceholderText(QApplication::translate("Principal", " Numero de Aviones a Ingresar", Q_NULLPTR));
        txtTurnos->setDocumentTitle(QString());
        txtTurnos->setPlainText(QString());
        txtTurnos->setPlaceholderText(QApplication::translate("Principal", " Numero de Turnos", Q_NULLPTR));
        btnP->setText(QString());
        btnAviones->setText(QApplication::translate("Principal", "Llegada de Aviones", Q_NULLPTR));
        lblLlegadaAviones->setText(QString());
        lblDesabordaje->setText(QString());
        btnDesabordaje->setText(QApplication::translate("Principal", "Desabordaje", Q_NULLPTR));
        btnEquipaje->setText(QApplication::translate("Principal", "Equipaje", Q_NULLPTR));
        lblEquipaje->setText(QString());
        btnEscritoriosRegistro->setText(QApplication::translate("Principal", "Escritorios de Registro", Q_NULLPTR));
        lblEscritorioRegistro->setText(QString());
        lblMantenimiento->setText(QString());
        btnMantenimiento->setText(QApplication::translate("Principal", "Escritorios de Registro", Q_NULLPTR));
        lblDocumentosPasajero->setText(QString());
        btnDocumentos->setText(QApplication::translate("Principal", "Documentos de Pasajero", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
