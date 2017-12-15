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

      void GraficarColaDesabordaje(){

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

// COLA DE AVIONES EN MANTENIMIENTO
      struct NodoAvionesMantenimiento{
          int Avion;
          struct NodoAvionesMantenimiento *Siguiente;
      };

      struct NodoAvionesMantenimiento *PrimerAvionM = NULL;
      struct NodoAvionesMantenimiento *UltimoAvionM = NULL;

      void DesocuparColaAvionMantenimiento(){
          struct NodoAvionesMantenimiento *AuxAvion = PrimerAvionM;
          struct NodoAvionesMantenimiento * AuxAvion1;
          if(AuxAvion == NULL){
              std::cout << "COLA DE AVIONES EN MANTENIMIENTO" << std::endl;
          }else{
              while( AuxAvion != NULL){
              AuxAvion1 = AuxAvion;
              AuxAvion = AuxAvion->Siguiente;
              free(AuxAvion1);
              }
          }

      }

      void InsertarAvionesColaMantenimiento( int NoAvion){
          struct NodoAvionesMantenimiento *NuevoAvion = NULL;
          //modificacion
          NuevoAvion = (struct NodoAvionesMantenimiento*)malloc(sizeof(struct NodoAvionesMantenimiento));
          NuevoAvion->Avion = NoAvion;
          NuevoAvion->Siguiente = NULL;

          if(PrimerAvionM == NULL){
              PrimerAvionM = NuevoAvion;
              UltimoAvionM = NuevoAvion;
          }else{
              UltimoAvionM->Siguiente = NuevoAvion;
              UltimoAvionM = NuevoAvion;
          }
      }

      void MostrarAvionesColaMantenimiento(){
          struct NodoAvionesMantenimiento *AuxAviones = PrimerAvionM;
          std::cout << "AVIONES EN COLA DE MANTENIMIENTO" << std::endl;
          while (AuxAviones != NULL)
          {
              std::cout << AuxAviones->Avion << std::endl;
              AuxAviones = AuxAviones->Siguiente;
          }
      }

      int SacarAvionMantenimiento(){
          if(PrimerAvionM != NULL){
          int DatosAviones = PrimerAvionM->Avion;
              struct NodoAvionesMantenimiento *AuxAvion = PrimerAvionM;
              if(PrimerAvionM == UltimoAvionM){
                  PrimerAvionM = NULL;
                  UltimoAvionM = NULL;
              }else{
                  PrimerAvionM = PrimerAvionM->Siguiente;
              }
              free(AuxAvion);
              return DatosAviones;
          }else{
              return -1;
          }
      }

//LISTA DOBLEMENTE ENLAZADA DE ESCRITORIOS DE REGISTRO

      struct NodoEscritoriosRegistro {
             int Escritorio;
             struct NodoEscritoriosRegistro *Anterior;
             struct NodoEscritoriosRegistro * Siguiente;
             //Nodo(int Dato);
      };

      struct NodoEscritoriosRegistro *PrimeroEscReg = NULL;
      struct NodoEscritoriosRegistro *AuxTemporal = NULL;
      struct NodoEscritoriosRegistro *AuxTemporal1 = NULL;
      struct NodoEscritoriosRegistro *AuxTemporal2 = NULL;



         void InsertaListaDobleEscritorios(int EscritorioRegistro){
               if(PrimeroEscReg == NULL){
                   AuxTemporal = (struct NodoEscritoriosRegistro*)malloc(1*sizeof(struct NodoEscritoriosRegistro));
                   AuxTemporal->Siguiente = NULL;
                   AuxTemporal->Anterior = NULL;
                   AuxTemporal->Escritorio = EscritorioRegistro;
                   PrimeroEscReg = AuxTemporal;
                   AuxTemporal1 = PrimeroEscReg;
               }else{
                   AuxTemporal = (struct NodoEscritoriosRegistro*)malloc(1*sizeof(struct NodoEscritoriosRegistro));
                   AuxTemporal->Siguiente = NULL;
                   AuxTemporal->Anterior = NULL;
                   AuxTemporal->Escritorio = EscritorioRegistro;
                   AuxTemporal1->Siguiente = AuxTemporal;
                   AuxTemporal->Anterior = AuxTemporal1;
                   AuxTemporal1 = AuxTemporal;
               }
            }

            void MostrarListaDobleEscritorios(){
                AuxTemporal2 = PrimeroEscReg;
                if(AuxTemporal2 == NULL){
                    std::cout<< "---> Lista doblemenete enlazada de escritorios registrados esta vacia " << std::endl;
                }else{
                    while (AuxTemporal2->Siguiente != NULL){
                        std::cout<<AuxTemporal2->Escritorio << std::endl;
                        AuxTemporal2 = AuxTemporal2->Siguiente;
                    }
                    std::cout<< AuxTemporal2->Escritorio << std::endl;
                }
            }
//COLA SIMPLE DE PASAJEROS EN ESCRITORIOS DE REGISTRO
            struct NodoPasajerosEscritorios{
                int NoPasajeroEscritorio;
                struct NodoPasajerosEscritorios *Siguiente;
            };

            struct NodoPasajerosEscritorios *PrimerPasajeroEsc = NULL;
            struct NodoPasajerosEscritorios *UltimoPasajeroEsc = NULL;

            void DesocuparColaPasajeroEscritorio(){
                struct NodoPasajerosEscritorios *AuxPasEsc = PrimerPasajeroEsc;
                struct NodoPasajerosEscritorios * AuxPasEsc1;
                if(AuxPasEsc == NULL){
                    std::cout << "COLA DE PASAJEROS EN ESCRITORIO DE REGISTRO" << std::endl;
                }else{
                    while( AuxPasEsc != NULL){
                    AuxPasEsc1 = AuxPasEsc;
                    AuxPasEsc = AuxPasEsc->Siguiente;
                    free(AuxPasEsc1);
                    }
                }
            }

            void InsertarColaPasajeroEscritorio( int PasajeroEscritorio){
                struct NodoPasajerosEscritorios *NuevoPasajeroEscritorio = NULL;
                NuevoPasajeroEscritorio = (struct NodoPasajerosEscritorios*)malloc(sizeof(struct NodoPasajerosEscritorios));
                NuevoPasajeroEscritorio->NoPasajeroEscritorio = PasajeroEscritorio;
                NuevoPasajeroEscritorio->Siguiente = NULL;

                if(PrimerPasajeroEsc == NULL){
                    PrimerPasajeroEsc = NuevoPasajeroEscritorio;
                    UltimoPasajeroEsc = NuevoPasajeroEscritorio;
                }else{
                    UltimoPasajeroEsc->Siguiente = NuevoPasajeroEscritorio;
                    UltimoPasajeroEsc = NuevoPasajeroEscritorio;
                }
            }

            void MostrarPasajerosEscritorios(){
                struct NodoPasajerosEscritorios *AuxPasaj = PrimerPasajeroEsc;
                std::cout << "PASAJEROS EN ESCRITORIOS DE REGISTRO" << std::endl;
                while (AuxPasaj != NULL)
                {
                    std::cout << AuxPasaj->NoPasajeroEscritorio << std::endl;
                    AuxPasaj = AuxPasaj->Siguiente;
                }
            }

            int SacarPasajeroEscritorio(){
                if(PrimerPasajeroEsc != NULL){
                int DatosPasajEscr = PrimerPasajeroEsc->NoPasajeroEscritorio;
                    struct NodoPasajerosEscritorios *AuxPasEsc = PrimerPasajeroEsc;
                    if(PrimerPasajeroEsc == UltimoPasajeroEsc){
                        PrimerPasajeroEsc = NULL;
                        UltimoPasajeroEsc = NULL;
                    }else{
                        PrimerPasajeroEsc = PrimerPasajeroEsc->Siguiente;
                    }
                    free(AuxPasEsc);
                    return DatosPasajEscr;
                }else{
                    return -1;
                }
            }

// LISTA CIRCULAR DOBLEMENTE ENLAZADA
struct NodoMaletas{
    int Maleta;
    struct NodoMaletas *Anterior;
    struct NodoMaletas *Siguiente;
};
/*
typedef struct NodoMaletas NodoM;
NodoM *ListaMaleta = NULL;*/
struct NodoMaletas *ListaMaleta = NULL;

void InsertarMaletas(int NoMaleta){
    struct NodoMaletas *AuxMaletas = NULL;
    AuxMaletas = (struct NodoMaletas*)malloc(sizeof(NodoMaletas));
    if(AuxMaletas){
        AuxMaletas->Maleta = NoMaleta;
        if(ListaMaleta){
            AuxMaletas->Anterior = ListaMaleta->Anterior;
            AuxMaletas->Siguiente = ListaMaleta;
            ListaMaleta->Anterior->Siguiente = AuxMaletas;
            ListaMaleta->Anterior = AuxMaletas;
        }else{
            AuxMaletas->Anterior = AuxMaletas;
            AuxMaletas->Siguiente = AuxMaletas;
        }
        ListaMaleta = AuxMaletas;
    }
}
void MostrarMaletas(){
    /*NodoMaletas *AuxMaleta = ListaMaleta;
    int pos = 0;

    std::cout << "MALETAS DE PASAJEROS" << std::endl;

    while (AuxMaleta!=NULL)
    {
        std::cout << AuxMaleta->Maleta << std::endl;
        AuxMaleta = AuxMaleta->Siguiente;
        if(AuxMaleta == ListaMaleta)
            pos++;
    }
    */
    NodoMaletas *nodo = ListaMaleta;

       do {
        std::cout << nodo->Maleta << std::endl;
          //printf("%d -> ", nodo->Maleta);
          nodo = nodo->Siguiente;
       } while(nodo != ListaMaleta);
      // printf("\n");
}





#endif // COLADBPASAJEROS_H
