<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Registrarse.aspx.cs" Inherits="Naval_Wars.Registrarse" %>

<html lang="en">

    <head>

        <meta charset="utf-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <title>SID Viewer Registro</title>
        <!-- CSS -->
        <link rel="stylesheet" href="http://fonts.googleapis.com/css?family=Roboto:400,100,300,500">
        <link rel="stylesheet" href="Registro/assets/bootstrap/css/bootstrap.min.css">
        <link rel="stylesheet" href="Registro/assets/font-awesome/css/font-awesome.min.css">
		<link rel="stylesheet" href="Registro/assets/css/form-elements.css">
        <link rel="stylesheet" href="Registro/assets/css/style.css">

        <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
        <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
        <!--[if lt IE 9]>
            <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
            <script src="https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js"></script>
        <![endif]-->

        <!-- Favicon and touch icons -->
        <link rel="shortcut icon" href="Registro/assets/ico/favicon.png">
        <link rel="apple-touch-icon-precomposed" sizes="144x144" href="Registro/assets/ico/apple-touch-icon-144-precomposed.png">
        <link rel="apple-touch-icon-precomposed" sizes="114x114" href="Registro/assets/ico/apple-touch-icon-114-precomposed.png">
        <link rel="apple-touch-icon-precomposed" sizes="72x72" href="Registro/assets/ico/apple-touch-icon-72-precomposed.png">
        <link rel="apple-touch-icon-precomposed" href="Registro/assets/ico/apple-touch-icon-57-precomposed.png">

    </head>

    <body>

		<!-- Top menu -->
		<nav class="navbar navbar-inverse navbar-no-bg" role="navigation">
			<div class="container">
				<div class="navbar-header">
					<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#top-navbar-1">
						<span class="sr-only">Toggle navigation</span>
						<span class="icon-bar"></span>
						<span class="icon-bar"></span>
						<span class="icon-bar"></span>
					</button>
					<a class="navbar-brand" href="index.html">SID Viewer Registro</a>
				</div>
						</nav>

        <!-- Top content -->
        <div class="top-content">
        	
            <div class="inner-bg">
                <div class="container">
                    <div class="row">
                        <div class="col-sm-7 text">
                            <h1 style ="color:rgb(255, 255, 255); background-color: #33CCFF;"><strong>Naval Wars</strong> Formulario de Registro</h1>
                            <div class="description">
                            	<p style ="color:rgb(255, 255, 255); font-size: large; font-weight: 400; background-color: #33CCFF;">
	                            	Llene el formulario para poder crear usuarios.
                            	</p>
                            </div>
                            <div class="top-big-link">
                            	<a class="btn btn-link-1" href="Administrador.aspx">Home</a>
                            	<a class="btn btn-link-2" href="ControlUsuarios.aspx">Control de Cuentas de Usuarios</a>
                            </div>
                        </div>
                        <div class="col-sm-5 form-box">
                        	<div class="form-top">
                        		<div class="form-top-left">
                        			<h3>Registrese Ahora</h3>
                            		<p>Rellene el siguiente formulario para obtener acceso:</p>
                        		</div>
                        		<div class="form-top-right">
                        			<i class="fa fa-pencil"></i>
                        		</div>
                            </div>
                           <div class="form-bottom">
			                    <form id="form1" runat="server">
			                    	<div class="form-group">
			                    		<label class="sr-only" for="form-usuario">Usuario </label>
			                        	<asp:TextBox ID="TextBox1"  placeholder="Usuario" runat="server" Width="410px"></asp:TextBox>
			                        </div>
			                        <div class="form-group">
			                        	<label class="sr-only" for="form-contraseña">Contraseña</label>
                                        <asp:TextBox ID="TextBox6" class="form-password form-control" placeholder="Contraseña" TextMode="Password" runat="server" Width="410px" Height="50px"></asp:TextBox>
			                        </div>
			                        <div class="form-group">
			                        	<label class="sr-only" for="form-nombre">Nombre</label>
			                        	<asp:TextBox ID="TextBox3" placeholder="Nombre" runat="server" Width="410px"></asp:TextBox>
                                    </div>
                                    <div class="form-group">
			                        	<label class="sr-only" for="form-apellido">Apellido</label>
			                        	<asp:TextBox ID="TextBox4" placeholder="Apellido" runat="server" Width="410px"></asp:TextBox>
                                    </div>
                                    <div class="form-group">
			                        	<label class="sr-only" for="form-correo">Correo Electronico</label>
			                        	<asp:TextBox ID="TextBox5" placeholder="Correo Electronico" runat="server" Width="410px"></asp:TextBox>
                                        <br />                                      
                                    </div>
                                     <div class="form-group">
                                        <asp:DropDownList ID="DropDownList1" runat="server" Height="51px" Width="410px">
                                            <asp:ListItem>Administrador</asp:ListItem>
                                            <asp:ListItem>Operador</asp:ListItem>
                                        </asp:DropDownList>
                                    </div>
			                      
			                        <asp:Button ID="Button1" class="btn" runat="server" Height="50px" Text="Registrarse" Width="151px" BackColor="#57D5D5" Font-Size="Medium" ForeColor="White"   />
			                    </form>
		                    </div>
                        </div>
                    </div>
                </div>
            </div>
            
        </div>


        <!-- Javascript -->
        <script src="assets/js/jquery-1.11.1.min.js"></script>
        <script src="assets/bootstrap/js/bootstrap.min.js"></script>
        <script src="assets/js/jquery.backstretch.min.js"></script>
        <script src="assets/js/retina-1.1.0.min.js"></script>
        <script src="assets/js/scripts.js"></script>
        
        <!--[if lt IE 10]>
            <script src="assets/js/placeholder.js"></script>
        <![endif]-->

    </body>

</html>