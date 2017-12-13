#ifndef COLADBPASAJEROS_H
#define COLADBPASAJEROS_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>



// COLA DOBLEMENTE ENLAZADA DE LLEGADA DE AVIONES
struct Nodo {
       int Dato;
       struct Nodo *Anterior;
       struct Nodo * Siguiente;
       Nodo(int Dato);
};

struct Nodo *PrimeroA = NULL;
struct Nodo *Temporal = NULL;
struct Nodo *Temporal1 = NULL;
struct Nodo *Temporal2 = NULL;



   void InsertarColaDobleLlegadaAvion (int Dat){
         if(PrimeroA == NULL){
             Temporal = (struct Nodo*)malloc(1*sizeof(struct Nodo));
             Temporal->Siguiente = NULL;
             Temporal->Anterior = NULL;             
             Temporal->Dato = Dat;
             PrimeroA = Temporal;
             Temporal1 = PrimeroA;
         }else{
             Temporal = (struct Nodo*)malloc(1*sizeof(struct Nodo));
             Temporal->Siguiente = NULL;
             Temporal->Anterior = NULL;             
             Temporal->Dato = Dat;
             Temporal1->Siguiente = Temporal;
             Temporal->Anterior = Temporal1;
             Temporal1 = Temporal;
         }
      }

      void MostrarColaDobleLlegadaAvion(){
          Temporal2 = PrimeroA;
          if(Temporal2 == NULL){
              std::cout<< "---> Cola Doblemente Enlazada de llegada de aviones esta vacia " << std::endl;
          }else{
              while (Temporal2->Siguiente != NULL){
                  std::cout<<Temporal2->Dato << std::endl;
                  Temporal2 = Temporal2->Siguiente;
              }
              std::cout<< Temporal2->Dato << std::endl;
          }
      }

      int SacarUnAvionLlegada(){
          if(PrimeroA != NULL){
          int DatoPasajero = PrimeroA->Dato;
              struct Nodo *AuxPasajero = PrimeroA;
              if(PrimeroA == Temporal1){
                  PrimeroA = NULL;
                  Temporal1 = NULL;
              }else{
                  PrimeroA = PrimeroA->Siguiente;
              }
              free(AuxPasajero);
              return DatoPasajero;
          }else{
              return -1;
          }
      }

// COLA DE DESABORDAJE DE PASAJEROS

      struct NodoDesabordaje{
          int NoPasajero;
          struct NodoDesabordaje *Siguiente;
      };

      struct NodoDesabordaje *Primero = NULL;
      struct NodoDesabordaje *Ultimo = NULL;

      void DesocuparColaDesabordaje(){
          struct NodoDesabordaje *AuxPasajero = Primero;
          struct NodoDesabordaje * AuxPasajero1;
          if(AuxPasajero == NULL){
              std::cout << "COLA DE DESABORDAJE A SIDO LIBERADA PARA EL PROX AVION" << std::endl;
          }else{
              while( AuxPasajero != NULL){
              AuxPasajero1 = AuxPasajero;
              AuxPasajero = AuxPasajero->Siguiente;
              free(AuxPasajero1);
              }
          }

      }

      void InsertarColaDesabordaje( int NoPersona){
          struct NodoDesabordaje *NuevoPasajero = NULL;
          //modificacion
          NuevoPasajero = (struct NodoDesabordaje*)malloc(sizeof(struct NodoDesabordaje));
          NuevoPasajero->NoPasajero = NoPersona;
          NuevoPasajero->Siguiente = NULL;

          if(Primero == NULL){
              Primero = NuevoPasajero;
              Ultimo = NuevoPasajero;
          }else{
              Ultimo->Siguiente = NuevoPasajero;
              Ultimo = NuevoPasajero;
          }
      }

      void MostrarColaDesabordaje(){
          struct NodoDesabordaje *AuxPersonas = Primero;
          std::cout << "PERSONAS EN LA COLA DE DESABORDAJE." << std::endl;
          while (AuxPersonas != NULL)
          {
              std::cout << AuxPersonas->NoPasajero << std::endl;
              AuxPersonas = AuxPersonas->Siguiente;
          }
      }

      int SacarPasajeroDesabordaje(){
          if(Primero != NULL){
          int DatoPasajero = Primero->NoPasajero;
              struct NodoDesabordaje *AuxPasajero = Primero;
              if(Primero == Ultimo){
                  Primero = NULL;
                  Ultimo = NULL;
              }else{
                  Primero = Primero->Siguiente;
              }
              free(AuxPasajero);
              return DatoPasajero;
          }else{
              return -1;
          }
      }

//LISTA SIMPLE DE ESTACIONES DE MANTENIMIENTO
      /*typedef struct Nodo Nodo;
      typedef struct ListaSimple ListaSimple;

      struct ListaSimple{
           Nodo *primero;
           void Insertar(int Dato);
           void Eliminar();
           void Graficar();
       };
       */
      struct NodoEstacionMantenimiento {
             int Dato;
             //struct NodoEstacionMantenimiento *Anterior;
             struct NodoEstacionMantenimiento * Siguiente;
             //NodoEstacionMantenimiento(int Dato);
      };

      struct NodoEstacionMantenimiento *PrimeraEstacion = NULL;
      struct NodoEstacionMantenimiento *UltimaEstacion = NULL;

      void InsertarEstacionAviones(int Estacion){
          struct NodoEstacionMantenimiento *NuevaEstacion = NULL;
          NuevaEstacion = (struct NodoEstacionMantenimiento*)malloc(sizeof(struct NodoEstacionMantenimiento));

          NuevaEstacion->Dato = Estacion;
          NuevaEstacion->Siguiente = NULL;

          if(PrimeraEstacion == NULL){
              PrimeraEstacion = NuevaEstacion;
              UltimaEstacion = NuevaEstacion;
          }else{
              UltimaEstacion->Siguiente = NuevaEstacion;
              UltimaEstacion = NuevaEstacion;
          }


    }
      void MostrarEstacionesMantenimiento(){
          struct NodoEstacionMantenimiento *AuxEstaciones = PrimeraEstacion;
          std::cout << "ESTACIONES DE MANTENIMIENTO." << std::endl;
          while (AuxEstaciones != NULL)
          {
              std::cout << AuxEstaciones->Dato << std::endl;
              AuxEstaciones = AuxEstaciones->Siguiente;
          }
      }

    //PILA DE DOCUMENTOS DEL PASAJERO

      struct NodoPilaDocumentos {
          int NoDocumentoPasajero;
          struct NodoPilaDocumentos *Siguiente;
      };

      struct NodoPilaDocumentos *PrimerDocumento = NULL;

      void PushDocumentosPasajeros(int DocumentoPasajero)
      {
          struct NodoPilaDocumentos *NuevoDocumentoPasajero;
          NuevoDocumentoPasajero = (struct NodoPilaDocumentos*)malloc(sizeof(struct NodoPilaDocumentos));
          NuevoDocumentoPasajero->NoDocumentoPasajero = DocumentoPasajero;
          if (PrimerDocumento == NULL)    {
              PrimerDocumento = NuevoDocumentoPasajero;
              NuevoDocumentoPasajero->Siguiente = NULL;
          }
          else
          {
              NuevoDocumentoPasajero->Siguiente = PrimerDocumento;
              PrimerDocumento = NuevoDocumentoPasajero;
          }
      }

      int PopDocumentos()
      {
          if (PrimerDocumento != NULL)
          {
              int NoDocumento = PrimerDocumento->NoDocumentoPasajero;
              struct NodoPilaDocumentos *PivoteAux = PrimerDocumento;
              PrimerDocumento = PrimerDocumento->Siguiente;
              free(PivoteAux);
              return NoDocumento;
          }
          else
          {
              return -1;
          }
      }

      void EliminarPilaDocumentos()
      {
          struct NodoPilaDocumentos *PivotePilaRecorrer = PrimerDocumento;
          struct NodoPilaDocumentos *PivoteAux;
          if(PivotePilaRecorrer == NULL){
              printf("PILA DE DOCUMENTOS DEL PASAJERO A SIDO TERMINADA Y LIBERADA");
          }else{
              while (PivotePilaRecorrer != NULL){
                  PivoteAux = PivotePilaRecorrer;
                  PivotePilaRecorrer = PivotePilaRecorrer->Siguiente;
                  free(PivoteAux);
              }
          }

      }


      void MostrarPilaDocumentosPasajero()
      {
          struct NodoPilaDocumentos *PivotePilaRecorrer = PrimerDocumento;
          if(PivotePilaRecorrer != NULL ){
          while (PivotePilaRecorrer != NULL)
          {
              std::cout<<PivotePilaRecorrer->NoDocumentoPasajero<<std::endl;
              PivotePilaRecorrer = PivotePilaRecorrer->Siguiente;
          }
          }else{
              std::cout<<"PILA DE DOCUMENTOS DEL PASAJERO VACIA"<<std::endl;
          }
      }



#endif // COLADBPASAJEROS_H
