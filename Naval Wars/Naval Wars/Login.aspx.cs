using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
namespace Naval_Wars
{
    public partial class Login : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            ArbolBinarioBusqueda a = new ArbolBinarioBusqueda();
            a.InsertarNodo(1);
            a.InsertarNodo(2);
            a.InsertarNodo(3);
            a.InsertarNodo(4);
            a.InsertarNodo(5);
            a.AlturaArbol();
            a.InOrden();
            a.PosOrden();
            a.PreOrden();

        }

        protected void btnIniciarSesion_Click(object sender, EventArgs e)
        {
            
        }

       

       
    }
}