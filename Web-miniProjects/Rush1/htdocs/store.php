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
	$sql = "SELECT * FROM products";
	if ($_POST["select_category"] != "")
	{
		$category = mysqli_real_escape_string($db, $_POST["select_category"]);
		$sql .= " WHERE category = \"".$category."\"";
	}
	$result = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
	mysqli_free_result($result);
}
?>

<!DOCTYPE HTML>
<html>
<head>
	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
	<title>Musicshop</title>
	<link rel="stylesheet" href="style.css" type="text/css" />
	<link rel="stylesheet" href="connect.css" type="text/css" />
	<script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
</head>
<body>
	<div id="main">
	<header>
		<?php include("header.php");
                include("login.php"); 
        $_SESSION['current'] = "store.php"?>
	</header>
	<nav>
		<form action="store.php" method="post" id = "change_category">
		<label id="label_category" for="select_category">Select your category</label>
		<select name="select_category" id="select_category" onChange="this.parentNode.submit()">
		<option value = "all">Toate</option>
<?php
        
$sql = "SELECT name FROM categories";
$cate = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);

            foreach ($cate as $elem)
                echo '<option value="'.$elem['name'].'" >'.$elem['name'].'</option>';
?>    
</select>
		</form>
	</nav>
	<aside>
		<?php include("basket.php"); ?>
	</aside>
	<section class = "store">
		<div id = "products">
<?php
if (count($result) == 0)
	echo "<span class = \"error\">Sorry, there is no more object available in this category !\n</span>";
foreach ($result as $product)
{
	$product["pitch"] = str_replace("%name", $product["name"]." ".$product["category"]." candy", $product["pitch"]);
	echo "<div class = \"item\">
		<a href=\"product.php?ID=".$product['ID']."\" alt=\"check_product\">
		<div class = \"img\">
			<img src=\"resource/".$product['img']."\" alt=\"".$product['name']."\" width=\"120px\" height=\"120px\"/>
		</div>
		<div class = \"text\">
			<h4 class = \"price\">".$product['price']." € <span class=\"kg\">(p/kg)</span></h4>
			<h5 class =\"title\">".$product['name']." <span>".$product['category']." candy</span></h5>
			<p class = \"pitch\">".$product['pitch']."</p><br/>
		</div>
		</a>
		</div>";
}
?>
		</div>
	</section>
	</div>

<?php
if (isset($_GET["error"]) && $_GET["error"] == "signin")
{
	echo "<div id=\"err_log\">
		<div>Please signin or create an account in order to proceed.
		<a id=\"close_error\" href=\"store.php\"><img src=\"http://static.tumblr.com/fsw133o/i5emcyrs0/close.png\" alt=\"close\" /></a>
		</div></div>";
	mysqli_close($db);
}
?>
</body>
</html>

