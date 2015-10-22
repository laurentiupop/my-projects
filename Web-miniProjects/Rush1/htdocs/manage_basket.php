<?php
session_start();

// add
if (isset($_POST['add_cart']))
{
	if ($_POST["quantity"] > $_POST["remaining"])
	{
		$_SESSION["error_qty"] = 1;
		header("Location: product.php?ID=".$_POST["ID"]);
	}
	else
	{
		$_SESSION['basket'][$_POST["ID"]] = ["name" => $_POST["name"],
									"img" => $_POST["img"],
									"pitch" => $_POST["pitch"],
									"price" => $_POST["price"],
									"quantity" => $_POST["quantity"],
									"category" => $_POST["category"],
									"remaining" => $_POST["remaining"]];
		header("Location: store.php");
	}
}

// remove
if (isset($_GET['action']) && $_GET['action'] == "remove_cart")
{
	$id = $_GET["item"];
	unset($_SESSION['basket'][$id]);
	header("Location: store.php");
}

// update
if (isset($_POST['update']))
{
	$_SESSION["basket"][$_POST["ID"]]["quantity"] = $_POST["quantity"];
	header("Location: store.php");
}
?>
