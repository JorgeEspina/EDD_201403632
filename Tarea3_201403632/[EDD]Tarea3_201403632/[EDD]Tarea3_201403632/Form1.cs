using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using _EDD_Tarea3_201403632.Estructura;
namespace _EDD_Tarea3_201403632
{
    public partial class Form1 : Form
    {
        
        ArbolBinarioBusqueda a = new ArbolBinarioBusqueda();

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
           // char caracter = 'A';
            //int valorASCII = (int)caracter;           
            a.InsertarNodo('a');
            a.InsertarNodo('b');
            a.InsertarNodo('c');
            a.InsertarNodo('d');
            a.InsertarNodo('z');
            a.InsertarNodo('s');
            a.InsertarNodo('a');

            a.InOrden();
            Console.WriteLine("INORDEN");
            a.PosOrden();
            Console.WriteLine("POSTORDEN");
            a.PreOrden();
            Console.WriteLine("PREORDEN");

            //Console.Write(valorASCII + "");

        }
    }
}
