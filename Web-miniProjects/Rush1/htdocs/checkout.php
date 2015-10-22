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
	$result = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
	$showcase = array_rand($result, 9);
	mysqli_free_result($result);
	mysqli_close($db);
}
?>
<!DOCTYPE HTML>
<html>
<head>
	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
	<title>minishop - checkout</title>
	<link rel="stylesheet" href="style.css" />
	<script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
</head>
<body>
<div id = "main">
	<header>
		<?php include("header.php"); ?>
	</header>
	<nav>
		<a href="store.php">Return to the store</a>
	</nav>
	<section>
	<h3>
	Here is your cart ! Please check it before confirming your boughts.
	</h3>
	<form action="pay.php" method="post">
	<?php
$amount = "0";
if (isset($_SESSION["basket"]))
{
	if (count($_SESSION["basket"]) == 0)
		header("Location: store.php");
	foreach ($_SESSION["basket"] as $id => $item)
	{
		$name = $item['name']." ".$item['category']." candy";
		$item["pitch"] = str_replace("%name", $name, $itemm["pitch"]);
		echo "<div class = \"bsk_item\" title=\"".$item["pitch"]."\">
			<img src=\"resource/".$item["img"]."\"\" width=\"120px\" height=\"120px\" style=\"float:left\" alt=\"".$item["name"]."\" />
			<h4 style = \"font-weight:bolder;font-size:1.5em;position:relative;left:30px;\">".$name."</h4><br />
			<span class = \"checkoutline\">".$item["quantity"]." x ".$item["price"]." € = <span>".$item["price"] * $item["quantity"]." €</span></span>
			<input type=\"hidden\" class=\"remaining\" value=\"".$item["remaining"]."\" />
			<hr style=\"clear:both\"/>
			</div>";
		$amount += $item["price"] * $item["quantity"];
	}
}
echo "<div id = \"total\">Total : <span id = \"amount\">$amount €</span></div>";
echo "<input type =\"submit\" name=\"END\" id=\"checkoutbutton\" value = \"Vreau instrumentele !\" />";
echo "</form>";
?>
</p>
</section>
</div>

</body>
</html>
