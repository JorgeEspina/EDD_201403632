#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 struct Nodo {
        int *Dato;
        struct Nodo *Anterior;
        struct Nodo * Siguiente;
 }*nodos,*Temporal,*Temporal1,*Temporal2;

    int Posicion=0;
    void InsertarListaDoble();
    void MostrarListaDoble();
    void EliminarListaDoble();

int main(void)
{
    int n, opcion;
    nodos = NULL;
    Temporal = NULL;
    Temporal1 = NULL;
    do
    {
        printf( "\n   ------------Lista Doblemenete Enlanzada-------------", 163 );
        printf( "\n   1. Insertar en Lista", 163 );
        printf( "\n   2. Mostrar Lista ", 163 );
        printf( "\n   3. Eliminar en Lista", 163 );
        printf( "\n   4. Salir." );
        printf( "\n\n   Introduzca Opcion: ", 162 );

        scanf( "%d", &opcion );


        switch ( opcion )
        {
            case 1: InsertarListaDoble();
                    break;

            case 2: MostrarListaDoble();
                    break;

            case 3: EliminarListaDoble();
                    break;
         }


    } while ( opcion != 4 );

    return 0;

}


 void InsertarListaDoble (){
       if(nodos == NULL){
           int Dat;
           Temporal = (struct Nodo*)malloc(1*sizeof(struct Nodo));
           Temporal->Siguiente = NULL;
           Temporal->Anterior = NULL;
           printf("/n Ingrese el valor del nodo-->");
           scanf("%d",&Dat);
           Temporal->Dato = Dat;
           Posicion++;
           nodos = Temporal;
           Temporal1 = nodos;
       }else{
           int Dat;
           Temporal = (struct Nodo*)malloc(1*sizeof(struct Nodo));
           Temporal->Siguiente = NULL;
           Temporal->Anterior = NULL;
           printf("/n Ingrese el valor del nodo-->");
           scanf("%d",&Dat);
           Temporal->Dato = Dat;
           Posicion++;
           Temporal1->Siguiente = Temporal;
           Temporal->Anterior = Temporal1;
           Temporal1 = Temporal;
       }
    }

    void MostrarListaDoble(){
        Temporal2 = nodos;
        if(Temporal2 == NULL){
            printf("--> Lista Doble Vacia no hay elementos a mostrar");

        }else{
            while (Temporal2->Siguiente != NULL){
                printf("%d-->", Temporal2->Dato);
                Temporal2 = Temporal2->Siguiente;
            }
            printf("%d", Temporal2->Dato);
        }
    }

    void EliminarListaDoble(){
        int cont =1;
        int Pos;
        printf("--> Posicion del valor a eliminar-->");
        scanf("%d",&Pos);
        Temporal2 = nodos;
        if(nodos == NULL){
            printf("--> no se puede eliminar la posicion porque la lista esta vacia /n");
            return;
        } if((Pos < 1) || (Pos >= Posicion+1)){
            printf("-->Posicion fuera de rango /n ");
            return;
        }else{
            while(cont < Pos){
                Temporal2 = Temporal2->Siguiente;
                cont = cont +1;
            }
            if(cont ==1){
                if(Temporal2->Siguiente == NULL){
                    printf("--> valor eliminado de la lista /n");
                    free(Temporal2);
                    Temporal2= nodos = NULL;
                    return;
                }
            }
            if(Temporal2->Siguiente == NULL){
                Temporal2->Anterior->Siguiente = NULL;
                free(Temporal2);
                printf("--> valor eliminado de la lista /n");
                return;
            }
            Temporal2->Siguiente->Anterior = Temporal2->Anterior;
            if(cont != 1){
                Temporal2->Anterior->Siguiente = Temporal2->Siguiente;
            }else{
                nodos = Temporal2->Siguiente;
                printf("--> valor eliminado de la lista /n");
                free(Temporal2);
            }
        }Posicion--;
    }
