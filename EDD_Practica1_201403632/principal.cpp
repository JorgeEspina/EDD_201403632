#include "principal.h"
#include "ui_principal.h"
#include "coladbpasajeros.h"
#include "iostream"
Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_btnSiguienteTurno_clicked()
{
    // COLA DOBLE LLEGADA DE AVIONES
    std::cout << "COLA DOBLE LLEGADA DE AVIONES" << std::endl;

    InsertarColaDobleLlegadaAvion(5);
    InsertarColaDobleLlegadaAvion(7);
    InsertarColaDobleLlegadaAvion(1);
    MostrarColaDobleLlegadaAvion();
    SacarUnAvionLlegada();
    MostrarColaDobleLlegadaAvion();

    // COLA DE DESABORDAJE DE PASAJEROS
    std::cout << "COLA DE DESABORDAJE DE PASAJEROS" << std::endl;
    InsertarColaDesabordaje(5);
    InsertarColaDesabordaje(1);
    InsertarColaDesabordaje(89);
    MostrarColaDesabordaje();
    SacarPasajeroDesabordaje();
    MostrarColaDesabordaje();


    // LISTA SIMPLE DE ESTACIONES DE MANTENIMIENTO
    std::cout << "LISTA SIMPLE DE ESTACIONES DE MANTENIMIENTO " << std::endl;
    InsertarEstacionAviones(12);
    InsertarEstacionAviones(20);
    MostrarEstacionesMantenimiento();

    //LISTA DOBLE DE ESCRITORIOS
    std::cout << "LISTA DOBLE DE ESCRITORIOS DE REGISTRO" << std::endl;
    InsertaListaDobleEscritorios(2);
    InsertaListaDobleEscritorios(3);
    InsertaListaDobleEscritorios(4);
    MostrarListaDobleEscritorios();

    // COLA SIMPLE DE PASAJEROS EN VENTANILLA
    std::cout << "COLA SIMPLE DE PASAJEROS EN VENTANILLA DE REGISTRO" <<std::endl;
    InsertarColaPasajeroEscritorio(11);
    InsertarColaPasajeroEscritorio(22);
    InsertarColaPasajeroEscritorio(33);
    MostrarPasajerosEscritorios();
    SacarPasajeroEscritorio();
    MostrarPasajerosEscritorios();

    // PILA SIMPLE DE DOCUMENTOS DE PASAJERO
    std::cout << "PILA SIMPLE DE DOCUMENTOS DE PASAJERO" <<std::endl;
    PushDocumentosPasajeros(5);
    PushDocumentosPasajeros(2);
    PushDocumentosPasajeros(546);
    MostrarPilaDocumentosPasajero();
    std::cout << "DOCUMENTO YA REVISADO "<<PopDocumentos() <<std::endl;
    MostrarPilaDocumentosPasajero();


    // COLA SIMPLE DE AVIONES EN ESTACION DE MANTENIMIENTO
    std::cout << "COLA SIMPLE DE AVIONES EN ESTACION DE MANTENIMIENTO" <<std::endl;
    InsertarAvionesColaMantenimiento(1);
    InsertarAvionesColaMantenimiento(2);
    InsertarAvionesColaMantenimiento(3);
    MostrarAvionesColaMantenimiento();
    SacarAvionMantenimiento();
    MostrarAvionesColaMantenimiento();

    // LISTA DOBLEMENTE ENLAZADA CIRCULAR DE MALETAS
    std::cout << "LISTA DOBLE CIRCULAR DE MALETAS" <<std::endl;
    InsertarMaletas(1);
    InsertarMaletas(2);
    InsertarMaletas(3);
    MostrarMaletas();


}
