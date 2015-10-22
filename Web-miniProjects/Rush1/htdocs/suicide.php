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
    $que = 'DELETE FROM users WHERE login = "'.$_SESSION['user'].'"';
        if (mysqli_query($db, $que) == FALSE)
		    echo "Couldn't del user";
        echo "del done";
}
unset($_SESSION["user"], $_SESSION["admin"], $_POST);
header("Location: index.php");
?>