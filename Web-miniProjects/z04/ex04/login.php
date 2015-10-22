<?php
include('auth.php');
session_start();
$auth_ok = auth($_GET['login'], $_GET['passwd']);
if ($auth_ok === TRUE)
{
	$_SESSION['loggued_on_user'] = $_GET['login'];
	echo "OK\n";
}
else
{
	$_SESSION['loggued_on_user'] = "";
	echo "ERROR\n";
}
?>
