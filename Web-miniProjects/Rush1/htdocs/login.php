<?PHP
session_start();
$_SESSION["c_fail"] = 42;
if (!isset($_SESSION['current']))
    $_SESSION['current'] = "index.php";
if (isset($_POST['login']) && isset($_POST['passwd']) && $_POST['submit'] == "OK")
{
	if (isset($_POST["submit"]) && empty($_POST['login']))
		header("Location: index.php?error=plzfill");
	else if (isset($_POST["submit"]) && empty($_POST['passwd']) || strlen($_POST['passwd']) < 6)
		header("Location: index.php?error=notlongenough");
	else
	{
		include("connect.php");
		if (mysqli_connect_error())
		{
			$logMessage = 'MySQL Error: ' . mysqli_connect_error();
			die('Could not connect to the database');
		}
		else
		{

			$stmt = mysqli_prepare($db,
				'SELECT passwd, admin
				FROM users
				WHERE login=?');
			mysqli_stmt_bind_param($stmt, 's', $_POST['login']);
			if (mysqli_stmt_execute($stmt) == FALSE)
				echo "Damn <br/>";
			mysqli_stmt_bind_result($stmt, $passwd, $admin);
			if (mysqli_stmt_fetch($stmt) == FALSE)
				header("Location: index.php?error=badlogin");
			else
			{
				$pwd = hash('whirlpool', $_POST['passwd']);
				if ($passwd == $pwd)
				{
					$_SESSION["user"] = $_POST["login"];
					$_SESSION["admin"] = $admin;
				}
				else
					header("Location: index.php?error=badlogin");
			}
			mysqli_close($db);
		}
	}
}
if (isset($_SESSION['user']) && ($_SESSION["user"]) !== "")
{
    echo '<div class="connect">';
	echo $_SESSION["user"]." esti logat\n";
	echo "<br/><a href=\"logout.php\">Logout</a>";
    echo '<br/><a href="suicide.php">Sterge contul</a>';
	if (isset($_SESSION['admin']) && $_SESSION['admin'] == 1)
		echo "<a href=\"admin.php\">Admin mode</a>";
    echo "</div>";
}
else
{
?>
<div class="connect">
<form method="POST" action=<?PHP $_SESSION['current'] ?>>
    <div>
		<label for="login">Login</label><input type="text" name="login" id = "login" /></br>
	</div><div>	
        <label for="passwd">Password</label><input type="password" name="passwd" id="passwd" />
    </div>    
    <a href="new_account.php">Creaza cont</a>
    <input type="submit" name="submit" value="OK" />		
</div>
</form>
<?PHP
}
?>
