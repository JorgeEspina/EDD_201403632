<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Login.aspx.cs" Inherits="Naval_Wars.Login" %>

<!DOCTYPE html>

<html lang="en">

    <head>

        <meta charset="utf-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <title>Login Naval Wars</title>

        <!-- CSS -->
        <link rel="stylesheet" href="http://fonts.googleapis.com/css?family=Roboto:400,100,300,500">
        <link rel="stylesheet" href="assets/bootstrap/css/bootstrap.min.css">
        <link rel="stylesheet" href="assets/font-awesome/css/font-awesome.min.css">
		<link rel="stylesheet" href="assets/css/form-elements.css">
        <link rel="stylesheet" href="assets/css/style.css">

        <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
        <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
        <!--[if lt IE 9]>
            <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
            <script src="https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js"></script>
        <![endif]-->

        <!-- Favicon and touch icons -->
        <link rel="shortcut icon" href="assets/ico/favicon.png">
        <link rel="apple-touch-icon-precomposed" sizes="144x144" href="assets/ico/apple-touch-icon-144-precomposed.png">
        <link rel="apple-touch-icon-precomposed" sizes="114x114" href="assets/ico/apple-touch-icon-114-precomposed.png">
        <link rel="apple-touch-icon-precomposed" sizes="72x72" href="assets/ico/apple-touch-icon-72-precomposed.png">
        <link rel="apple-touch-icon-precomposed" href="assets/ico/apple-touch-icon-57-precomposed.png">

        <style type="text/css">
            .auto-style1 {
                color: #31B0D5;
                font-weight: normal;
            }
        </style>

    </head>

    <body>

        <!-- Top content -->
        <div class="top-content">
        
            <div class="inner-bg">
                <div class="container">
                    <div class="row">
                        <div class="col-sm-8 col-sm-offset-2 text">
                           <h1 class="auto-style1" style ="color:RGB(49,176,213);">Naval Wars</h1>
                            <a href="#"><img src="Recursos/logo.png" alt=""></a>                            
                        </div>
                    </div>
                    <div class="row">
                        <div class="col-sm-6 col-sm-offset-3 form-box">
                        	<div class="form-top">
                        		<div class="form-top-left">
                        				<h3>Login </h3>
                            		<p>Ingrese Usuario y Contraseña para Iniciar Sesion</p>
                        		</div>
                        		<div class="form-top-right">
                        			<i class="fa fa-lock"></i>
                        		</div>
                            </div>
                            <div class="form-bottom">
			                    <form id="form1" runat="server">
			                    	<div class="form-group">
			                    		<label class="sr-only" for="form-usuario">Usuario </label>
			                        	<asp:TextBox ID="txtUsuario"  placeholder="Usuario" runat="server" Width="500px"></asp:TextBox>
			                        </div>
			                        <div class="form-group">
			                        	<label class="sr-only" for="form-contraseña">Contraseña</label>
                                        <asp:TextBox ID="txtContraseña" class="<%--form--%>-password form-control" placeholder="Contraseña" TextMode="Password" runat="server" Width="500px" Height="50px"></asp:TextBox>
			                        </div>
			                        <asp:Button type="submit" class="btn btn-default btn-lg btn-block" ID="btnIniciarSesion" runat="server"  Text="Iniciar Sesion" Height="51px" Width="502px" BackColor="#30BDC5" BorderColor="White" ForeColor="White" Font-Bold="False" Font-Size="Medium" OnClick="btnIniciarSesion_Click" />
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
        <script src="assets/js/scripts.js"></script>
        
        <!--[if lt IE 10]>
            <script src="assets/js/placeholder.js"></script>
        <![endif]-->

    </body>

</html>