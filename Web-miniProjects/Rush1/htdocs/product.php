<?php
session_start();

include("connect.php");
if (mysqli_connect_error())
{
	$logMessage = 'MySQL Error: ' . mysqli_connect_error();
	die('Could not connect to the database');
}
else
{
	$id = mysqli_real_escape_string($db, $_GET["ID"]);
	$sql = "SELECT * FROM products WHERE ID = ".$id;
	$product = mysqli_fetch_array(mysqli_query($db, $sql), MYSQLI_ASSOC);
	mysqli_free_result($product);
	mysqli_close($db);
}
?>
<!DOCTYPE HTML>
<html>
<head>
	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
	<title>Music shop</title>
	<link rel="stylesheet" href="style.css" type="text/css" />
	<link rel="stylesheet" href="connect.css" type="text/css" />
	<script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
</head>
<body>
	<div id = "main">
	<header>
		<?php include("header.php");
              include("login.php");
        $_SESSION['current'] = "product.php?ID=".$GET['ID']?>
	</header>
	<nav>
		<a href="store.php">return to the store</a>
	</nav>
	<section>
		<div id = "products">
		<form action="manage_basket.php" method="post" accept-charset="utf-8">
<?php
	$name = $product['name']." ".$product['category']." candy";
	echo "<div class = \"product\">
		<h3>".$name."</h3>

		<img src=\"resource/".$product['img']."\" alt=\"".$name."\" />";

	if ($product['quantity'] > 0)
		echo "<span class = \"available\">Available (".$product["quantity"].")</span>";
	else
		echo "<span class = \"outofstock\">Out of stock</span>";

	$product["content"] = str_replace("%name", $name, $product["content"]);
	echo "
		<p class = \"content\">".$product['content']."</p>
		<div id=\"howmany\">
		<label for=\"quantity\">Quantity : </label><input size=\"3\" type=\"text\" name=\"quantity\" id=\"quantity\" value=\"1\" />
		</div>
		<input type=\"submit\" id=\"addcart\" name=\"add_cart\" id=\"add_cart\" value=\"Add to cart\" />
		<input type=\"hidden\" name=\"ID\" value = \"".$product['ID']."\" />
		<input type=\"hidden\" name=\"name\" value = \"".$product['name']."\" />
		<input type=\"hidden\" name=\"pitch\" value = \"".$product['pitch']."\" />
		<input type=\"hidden\" name=\"price\" value = \"".$product['price']."\" />
		<input type=\"hidden\" name=\"img\" value = \"".$product['img']."\" />
		<input type=\"hidden\" name=\"remaining\" value = \"".$product['quantity']."\" />
		<input type=\"hidden\" name=\"category\" value = \"".$product['category']."\" />
		</div>";
?>
		</form>
		</div>
		<?php
		if ($_SESSION['error_qty'] == 1)
		{
			echo "<p style=\"margin-top:250px;color:red; font-size:2em;\"> Error .</p>";
			$_SESSION["error_qty"] = 0;
		}
		?>
	</section>
	<aside>
		<?php include("basket.php"); ?> 
	</aside>
	</div>

</body>
</html>


