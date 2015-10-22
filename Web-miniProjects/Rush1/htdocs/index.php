<?php
session_start();
//
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
	<title>Musicshop</title>
	<link rel="stylesheet" href="style.css" />
    <link rel="stylesheet" href="connect.css" />
	
</head>
<body>
<div id = "main">
	<header>
		<?php include("header.php"); ?>
        <?php include("login.php"); 
        $_SESSION['actual'] = "index.php"?>
	</header>
	<nav>
		<a href="store.php">Visit our store</a>
		<a href="https://www.youtube.com/watch?v=sUnlb_rKWKc&list=PL5AEEE8AC9F5BB5FC&index=9">Music Playlist</a>
		<a href="store.php">Show my cart</a>
	</nav>
	<section>
	<div id = "main_img">
		<img src="http://openamusicstore.com/wp-content/uploads/2012/12/IMG_0076.jpg" width="800" height="500" alt="music life" />
	</div>
	<div id = "pitch">
	
	</p>
	</div>
	<div id = "showcase">
<?php
foreach ($showcase as $key)
{
	$result[$key]["pitch"] = str_replace("%name", $result[$key]["name"]." ".$result[$key]["category"]." candy", $result[$key]["pitch"]);
	echo "<div class = \"item\">
		<a href=\"product.php?ID=".$result[$key]['ID']."\" alt=\"check_result[$key]\">
		<div class = \"img\">
			<img src=\"resource/".$result[$key]['img']."\" width=\"120px\" height=\"120px\" alt=\"".$result[$key]['name']."\" />
		</div>
		<div class = \"text\">
			<h4 class = \"price\">".$result[$key]['price']." €  </h4>
			<h5 class =\"title\">".$result[$key]['name']." <span>".$result[$key]['category']." intrument</span></h5>
			<p class = \"pitch\">".$result[$key]['pitch']."</p><br/>
		</div>
		</a>
		</div>";
}
?>
	</div>
	</section>
</div>

<?php
if (isset($_GET["error"]))
{
	echo "<div id=\"err_log\">";
	switch ($_GET["error"])
	{
		case "badlogin":
			echo "<div>Connection error : login and password do not match !";
			break;
		case "plzfill":
			echo "<div>Please fill the login form !";
			break;
		case "notlongenough":
			echo "<div>Password must be six characters long minimum.";
			break;
	}
	echo  "<a id=\"close_error\" href=\"index.php\"><img src=\"http://static.tumblr.com/fsw133o/i5emcyrs0/close.png\" alt=\"close\" /></a>
		</div></div>";
}
?>

</body>
</html>
