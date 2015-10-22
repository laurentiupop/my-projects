<?PHP
session_start();
unset($_SESSION["user"], $_SESSION["admin"], $_POST);
header("Location: index.php");
?>
