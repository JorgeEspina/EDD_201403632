using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using _EDD_Tarea3_201403632.Properties;
namespace _EDD_Tarea3_201403632.Estructura
{
    class ArbolBinarioBusqueda
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

        public ArbolBinarioBusqueda()
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
                char c = (char)Raiz.Dato;
                String dato = c.ToString();
                Console.Write(dato + "->");               
                Raiz.HijoIzquierda.PreOrden();
                
                Raiz.HijoDerecha.PreOrden();
            }
        }
        public void InOrden()
        {
            if (!Vacio())
            {
                Raiz.HijoIzquierda.InOrden();
                char c = (char)Raiz.Dato;
                String dato = c.ToString();
                Console.Write(dato + "->");
                Raiz.HijoDerecha.InOrden();
            }
        }
        public void PosOrden()
        {
            if (!Vacio())
            {
                Raiz.HijoDerecha.PosOrden();
                Raiz.HijoIzquierda.PosOrden();
                char c = (char)Raiz.Dato;
                String dato = c.ToString();
                Console.Write(dato + "->");
            }
        }
       
        public Boolean Existe(int Valor)
        {
            if (!Vacio())
            {
                if (Valor == Raiz.Dato)
                {
                    return true;
                }
            }
            else
            {
                if (Valor < Raiz.Dato)
                {
                    Raiz.HijoIzquierda.Existe(Valor);
                }
                else
                {
                    Raiz.HijoDerecha.Existe(Valor);
                }
            }
            return false;
        }
  

       }
}
