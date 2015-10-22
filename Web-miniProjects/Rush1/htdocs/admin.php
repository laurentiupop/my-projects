<?PHP
session_start();

include("connect.php");
if (mysqli_connect_error())
{
	$logMessage = 'MySQL Error: ' . mysqli_connect_error();
	die('Could not connect to the database');
}
else
{
	$sql = "SELECT * FROM products";
	$products = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
	$sql = "SELECT * FROM users";
	$users = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
}
?>
<html>
<head>
	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
	<title>Admin page</title>
	<link rel="stylesheet" href="style.css" />
    <link rel="stylesheet" href="connect.css" />
</head>
<body>
    <div id="main" >
        <header>
        <?php include("header.php"); ?>
        <?php include("login.php"); 
        $_SESSION['actual'] = "index.php"?>
        </header>
        <nav>
            <a href="store.php">Visit our store</a>
        </nav>
        <section>
            <h2>Congratulations</h2>
        <div id="users_view" >
            <form method="post" action="edituser.php">
<?PHP
	foreach ($users as $us)
		echo '<div class="userline">
        <h4 class="login">'.$us["login"].'</h4>
		<h4 class="commande">Comanda</h4>
        <input type="submit" name="ID" value="'.$us["ID"].'">
        </div>';
?>
            </form>
	   </div>
<?PHP
	foreach ($products as $prod)
		echo '<div class="prodline">
		<h4 class="pname">'.$prod["name"].'</h4>
		<h4 class="price">price:'.$prod["price"].'&euro;</h4>
		<h4 class="stock">stock:'.$prod["quantity"].'</h4>
        <input type="submit" name="ID"value="'.$prod["ID"].'">
		</div>';
?>
                </form>
            <div class="prodline"><a href=index.php><h4>Creaza un produs nou</h4></a></div>
            </div>
            <div id="cate_view"><?php include("addcate.php"); ?></div>
        </section>
</div>
<?PHP
mysqli_close($db);
?>
<footer>
	<?php include("footer.php"); ?>
</footer>
</body>
</html>
