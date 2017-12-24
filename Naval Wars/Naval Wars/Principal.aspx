<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Principal.aspx.cs" Inherits="Naval_Wars.Principal" %>

<!DOCTYPE html>

<html>
	<head>
		<title></title>
		<meta charset="utf-8" />
		<meta name="viewport" content="width=device-width, initial-scale=1" />
		<link rel="stylesheet" href="Play/assets/css/main.css" />
	</head>
	<body>

		<form id="form1" runat="server">

		<!-- Wrapper -->
			<div id="wrapper">

				<!-- Header -->
					<header id="header">
						<span class="avatar"><img src="Play/images/avatar.jpg" alt="" /></span>
						<h1> <strong>Naval Wars </strong>Tablero de cada nivel  </a><br />
						Satelite->Aviones->Barcos->Submarinos</h1>
						<!--<ul class="icons">
							<li><a href="#" class="icon style2 fa-twitter"><span class="label">Twitter</span></a></li>
							<li><a href="#" class="icon style2 fa-facebook"><span class="label">Facebook</span></a></li>
							<li><a href="#" class="icon style2 fa-instagram"><span class="label">Instagram</span></a></li>
							<li><a href="#" class="icon style2 fa-500px"><span class="label">500px</span></a></li>
							<li><a href="#" class="icon style2 fa-envelope-o"><span class="label">Email</span></a></li>
						</ul> -->
					</header>

				<!-- Main -->
					<section id="main">                   
						<!-- Thumbnails -->
						    <div class="row">                               
                                      <div class="col-xs-6">
                                           <a class="thumbnail">
                                      <img src="Play/images/thumbs/Satelite.jpg" alt="" />
										<h3><strong>Satelite</strong></h3>
                                      <img style="width:100%; height:420px;" src="Play/images/fulls/04.jpg" alt="" />
                                  </a>
                                      </div>

                                      <div class="col-xs-6">
                                          <a class="thumbnail">
                                      <img src="Play/images/thumbs/Aviones.jpg" alt="" />
										<h3><strong>Aviones</strong></h3>
                                      <img style="width:100%; height:420px;" src="Play/images/fulls/04.jpg" alt="" />
                                  </a>

                                      </div>
                              
                                 
                               <div class="col-xs-6">
                        	<div class="form-top">
                        		<div class="form-top-left">
                        			<h3>Controles de Juego</h3>
                        		</div>
                        		<div class="form-top-right">
                        			<i class="fa fa-pencil"></i>
                        		</div>
                            </div>
                           <div class="form-bottom">
                                    <div class="form-group">
                                        <asp:DropDownList ID="DropDownList1" runat="server" Height="51px" Width="300px">
                                            <asp:ListItem>Listado de Navesl del Tablero</asp:ListItem>
                                        </asp:DropDownList>
                                    </div>			                      
			                    	<div class="form-group">
   			                    		<a class="thumbnail">
                                      <img src="Play/images/thumbs/Movimientos.jpg" alt="" />
										<h3><strong>Movimientos de la Nave</strong></h3> </a>
			                    		<!--<label class="sr-only" for="form-cox">Coodenadas en X: </label> -->
			                        	<asp:TextBox ID="TextBox1"  placeholder="Coodenadas en X" runat="server" Width="300px"></asp:TextBox>
			                        </div>
			                        <div class="form-group">
			                        	<!--<label class="sr-only" for="form-coy">Coordenada en Y:</label>-->
			                        	<asp:TextBox ID="TextBox2"  placeholder="Coodenadas en Y" runat="server" Width="300px"></asp:TextBox>
			                        </div>
                                    <asp:Button ID="Button1" class="btn" runat="server" Height="50px" Text="Mover Nave" Width="151px" BackColor="#57D5D5" Font-Size="Medium" ForeColor="White"   />

			                        <div class="form-group">
			                        	<!--<label class="sr-only" for="form-coox">Coodenadas en X</label>-->
			                        	<asp:TextBox ID="TextBox3" placeholder="Coodenadas en X" runat="server" Width="300px"></asp:TextBox>
                                    </div>
                                    <div class="form-group">
			                        	<!--<label class="sr-only" for="form-cooy">Coodenadas en Y</label>-->
			                        	<asp:TextBox ID="TextBox4" placeholder="Coodenadas en Y" runat="server" Width="300px"></asp:TextBox>
                                    </div>
                                    <div class="form-group">
			                        	<!--<label class="sr-only" for="form-nivel">Nivel :</label>-->
			                        	<asp:TextBox ID="TextBox5" placeholder="Nivel a Atacar" runat="server" Width="300px"></asp:TextBox>
                                        <!--<br />-->                                      
                                    </div>                                     
			                        <asp:Button ID="Button2" class="btn" runat="server" Height="50px" Text="Atacar Nave" Width="151px" BackColor="#57D5D5" Font-Size="Medium" ForeColor="White"   />
		                            <div class="form-group">
			                        	<label class="sr-only" for="form-consola">Consola :</label>
                                        <asp:TextBox id="TextArea1" TextMode="multiline" Columns="30" Rows="3" runat="server" />
                                        <br />                                      
                                    </div> 
                           </div>
                        </div>   
                                <div class="col-xs-6">
                                        <a class="thumbnail">
                                      <img src="Play/images/thumbs/Barcos.jpg" alt="" />
										<h3><strong>Barcos</strong></h3>
                                      <img style="width:100%; height:420px;" src="Play/images/fulls/03.jpg" alt="" />
                                  </a>
                                      </div>
                                <div class="col-xs-6">
                                         <a class="thumbnail">
                                      <img src="Play/images/thumbs/Submarinos.jpg" alt="" />
										<h3><strong>Submarinos</strong></h3>
                                      <img style="width:100%; height:420px;" src="Play/images/fulls/04.jpg" alt="" />
                                  </a>

                                      </div>                               
                                <div class="col-xs-6">
                                    </div>
                                  
                                
                                </div>                           
					</section>

				<!-- Footer -->
					<footer id="footer">
						<p>Proyecto EDD - Vacaciones de Diciembre</p>
					</footer>

			</div>

		<!-- Scripts -->
			<script src="Play/assets/js/jquery.min.js"></script>
			<script src="Play/assets/js/jquery.poptrox.min.js"></script>
			<script src="Play/assets/js/skel.min.js"></script>
			<script src="Play/assets/js/main.js"></script>

	    </form>

	</body>
</html>
