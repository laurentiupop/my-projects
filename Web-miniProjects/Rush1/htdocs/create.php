<?PHP
header("Location: new_account.php");
session_start();
$_SESSION["c_fail"] = 0;
if ($_POST["submit"] != "OK" || $_POST["login"] == "" || $_POST["passwd"] == "")
{
	echo "ERROR\n";
	exit (0);
}
include("connect.php");

if (mysqli_connect_error())
{
	$logMessage = 'MySQL Error: ' . mysqli_connect_error();
	die('Could not connect to the database');
}
else
{

	$stmt = mysqli_prepare($db,
		'SELECT login
		FROM users
		WHERE login=?');
	mysqli_stmt_bind_param($stmt, 's', $_POST['login']);
	mysqli_stmt_execute($stmt);
	mysqli_stmt_bind_result($stmt, $login);
	if (mysqli_stmt_fetch($stmt) == TRUE)
		$_SESSION["c_fail"] = 1;
	else
	{
		if (preg_match("/^([a-z]|\.|[0-9]|[A-Z]){4,}$/", $_POST["login"]) != 1)
			$_SESSION["c_fail"] = 4;
		else if (preg_match("/^([a-z]|\.|[0-9]|[A-Z]){6,}$/", $_POST["passwd"]) != 1)
			$_SESSION["c_fail"] = 5;
		else
		{
			$rq = "INSERT INTO test.users (ID, login, passwd, admin) VALUES (NULL, ?, ? , 0)";
			$stmt = mysqli_prepare($db, $rq);
			mysqli_stmt_bind_param($stmt, 'ss', $_POST['login'], hash('whirlpool',$_POST['passwd']));
			if (mysqli_stmt_execute($stmt) === FALSE)
				$_SESSION["c_fail"] = 2;
		}
	}
	mysqli_close($db);
}
?>
