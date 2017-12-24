using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
namespace Naval_Wars
{
    public class ArbolBinarioBusqueda
    {
        public class NodoBinarioBusqueda
        {
            public ArbolBinarioBusqueda HijoDerecha;
            public ArbolBinarioBusqueda HijoIzquierda;
            public int Dato;

            public void InicializarNodoArbol()
            {
                HijoDerecha = null;
                HijoIzquierda = null;
                Dato = 0;

            }

        }

        public NodoBinarioBusqueda Raiz;

        public  ArbolBinarioBusqueda()
        {
            NodoBinarioBusqueda Raiz = new NodoBinarioBusqueda();

        }
        public Boolean Vacio()
        {
            return (Raiz == null);
        }
        public void InsertarNodo(int Valor)
        {
            if (Vacio())
            {
                NodoBinarioBusqueda Nuevo = new NodoBinarioBusqueda();
                Nuevo.Dato = Valor;
                Nuevo.HijoDerecha = new ArbolBinarioBusqueda();
                Nuevo.HijoIzquierda = new ArbolBinarioBusqueda();
                Raiz = Nuevo;

            }
            else
            {
                if (Valor > Raiz.Dato)
                {
                    (Raiz.HijoDerecha).InsertarNodo(Valor);

                }
                if (Valor < Raiz.Dato)
                {
                    (Raiz.HijoIzquierda).InsertarNodo(Valor);
                }
            }
        }
        public void PreOrden()
        {
            if (!Vacio())
            {
                Console.WriteLine(Raiz.Dato + "->");
                Raiz.HijoIzquierda.PreOrden();
                Raiz.HijoDerecha.PreOrden();
            }
        }
        public void InOrden()
        {
            if(!Vacio()){
                Raiz.HijoIzquierda.InOrden();
                Console.WriteLine(Raiz.Dato + "->");
                Raiz.HijoDerecha.InOrden();
            }
        }
        public void PosOrden()
        {
            if(!Vacio()){
                Raiz.HijoDerecha.PosOrden();
                Raiz.HijoIzquierda.PosOrden();
                Console.WriteLine(Raiz.Dato + "->");
            }
        }
        public ArbolBinarioBusqueda BuscarNodo(int Valor)
        {
            ArbolBinarioBusqueda ArbolBusqueda = null;
            if(!Vacio()){
                if (Valor == Raiz.Dato)
                {
                    return this;
                }
                else
                {
                    if(Valor < Raiz.Dato){
                        ArbolBusqueda = Raiz.HijoIzquierda.BuscarNodo(Valor);
                    }
                    else
                    {
                        ArbolBusqueda = Raiz.HijoDerecha.BuscarNodo(Valor);
                    }
                }
            }
            return ArbolBusqueda;
        }
        public Boolean Existe(int Valor)
        {
            if (!Vacio())
            {
                if(Valor == Raiz.Dato){
                    return true;
                }
            }
            else
            {
                if(Valor < Raiz.Dato){
                    Raiz.HijoIzquierda.Existe(Valor);
                }
                else
                {
                    Raiz.HijoDerecha.Existe(Valor);
                }
            }
            return false;
        }
        public int Cantidad()
        {
            if(Vacio()){
                return 0;
            }
            else
            {
                return (1 + Raiz.HijoDerecha.Cantidad() + Raiz.HijoIzquierda.Cantidad());
            }
        }
        public int AlturaArbol()
        {
            if(!Vacio()){
                return 0;
            }
            else
            {
                return(1 + Math.Max(((Raiz.HijoIzquierda).AlturaArbol()),((Raiz.HijoDerecha).AlturaArbol())));
            }
        }
        public int BuscarMin(){
            ArbolBinarioBusqueda ArbolActual = this;
            while(!ArbolActual.Raiz.HijoIzquierda.Vacio()){
                ArbolActual = ArbolActual.Raiz.HijoIzquierda;
            }
            int Devuelvo = ArbolActual.Raiz.Dato;
            ArbolActual.Raiz =  null;
            return Devuelvo;
        }
        public int BuscarMan()
        {
            ArbolBinarioBusqueda ArbolActual = this;
            while(!ArbolActual.Raiz.HijoDerecha.Vacio()){
                ArbolActual = ArbolActual.Raiz.HijoDerecha;
            }
            int Devuelve = ArbolActual.Raiz.Dato;
            ArbolActual.Raiz = null;
            return Devuelve;
        }

        public Boolean Hojas()
        {
            Boolean Hoja = false;
            if((Raiz.HijoIzquierda).Vacio() && (Raiz.HijoDerecha).Vacio()){
                Hoja = true;
            }
            return Hoja;
        }

        public void EliminarNodo(int Valor)
        {
            ArbolBinarioBusqueda NodoEliminar = BuscarNodo(Valor);
            if(!NodoEliminar.Vacio()){
                if(NodoEliminar.Hojas()){
                    NodoEliminar.Raiz = null;
                }
            }
            else
            {
                if(!NodoEliminar.Raiz.HijoIzquierda.Vacio() && !NodoEliminar.Raiz.HijoDerecha.Vacio()){
                    NodoEliminar.Raiz.Dato = NodoEliminar.Raiz.HijoDerecha.BuscarMin();
                }
                else
                {
                    if(NodoEliminar.Raiz.HijoIzquierda.Vacio()){
                        NodoEliminar.Raiz.Dato = NodoEliminar.Raiz.HijoDerecha.BuscarMin();
                    }
                    else
                    {
                        if(NodoEliminar.Raiz.HijoIzquierda.Vacio()){
                            NodoEliminar.Raiz = NodoEliminar.Raiz.HijoDerecha.Raiz;
                        }
                        else
                        {
                            NodoEliminar.Raiz = NodoEliminar.Raiz.HijoIzquierda.Raiz;
                        }
                    }
                }
            }

        }
    }
}