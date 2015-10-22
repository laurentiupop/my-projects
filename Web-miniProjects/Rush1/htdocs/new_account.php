<?PHP
session_start();
$error = array(NULL,
	"User already exists",
	"We couldn't create your account. You must have done something wrong",
	"Something's wrong with the request",
	"Login wrong, it should be at least 4 alphanumeric caracters long",
	"Password must be at least 6 caracters long (thought you might have put some caracters
		we don't like)");
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
	</header>
	<nav>
		<a href="store.php">Visit our store</a>

	</nav>
<section>
<div id="account">

<?PHP
if (isset($_SESSION["c_fail"]) && $_SESSION["c_fail"] === 0)
{
	$_SESSION["c_fail"] = 42;
?>
<h1>ACCOUNT CREATED</h1>
<h2><a href="index.php">Back to the shop</a></h2>

<?PHP
}
else if (isset($_SESSION["c_fail"]) && $_SESSION["c_fail"] !== 42)
    echo "<h3>".$error[$_SESSION["c_fail"]]."</h3>";
?>
	<h3>Create a new account</h3>
	<form method="post" action="create.php" >
        <div>
	    <label for="login">Login</label><input type="text" name="login" value=""/>
	    </div><div>
        <label for="login">Password</label><input type="password"  name="passwd" value=""/>
        </div>
        <input type="submit" name="submit" value="OK"/>
        </form>

	   </div>
    </section>
</div>
<footer>
	<?php include("footer.php"); ?> 
</footer>
</body>
</html>
