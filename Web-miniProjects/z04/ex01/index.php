<?php
session_start();
if ($_GET['submit'] == "OK")
{
	$_SESSION['login'] = $_GET['login'];
	$_SESSION['passwd'] = $_GET['passwd'];
}
?>
<html><body>
	<form name="index.php" action="index.php" method="get">
		Identifiant: <input type="text" name="login" value="<?php echo $_SESSION['login'] ?>" />
		<br />
		Mot de passe: <input type="text" name="passwd" value="<?php echo $_SESSION['passwd'] ?>" />
		<br />
		<input type="submit" name="submit" value="OK" />
	</form>
</html></body>
