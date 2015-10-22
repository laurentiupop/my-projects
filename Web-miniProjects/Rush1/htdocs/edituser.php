<?PHP
include 'funk.php';
session_start();

include("connect.php");
if (mysqli_connect_error())
{
	$logMessage = 'MySQL Error: ' . mysqli_connect_error();
	die('Could not connect to the database');
}
else
{
    $id = mysqli_real_escape_string($db, $_POST["ID"]);
	$sql = "SELECT * FROM users WHERE ID = ".$id;
	$users = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
//	mysqli_free_result($users);
	
    if (isset($_POST['action']) && $_POST['action'] == "supprimer")
    {
        $stmt = mysqli_prepare($db,
                'DELETE FROM users WHERE ID =?');
			mysqli_stmt_bind_param($stmt, 's', $_POST['ID']);
			if (mysqli_stmt_execute($stmt) == FALSE)
				echo 'Damn '.$_POST['ID'].'<br/>';
            else
            {
                echo 'You\'ve killed user number '.$_POST['ID']; 
                $hitman = 1;
            }
    }
    if (isset($_POST['action']) && $_POST['action'] == "editer")
    {
        if (updateuser($users, $db) === TRUE)
        {
            echo 'Update done';
            $users[0]['login'] = $_POST['login'];
        }
        else
            echo 'Something went wrong';
    }
    mysqli_close($db);
}
?>
<!DOCTYPE HTML>
<html>
<head>
	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
	
	<link rel="stylesheet" href="style.css" />
    <link rel="stylesheet" href="connect.css" />
</head>
<body>
    <div id="main" >
        <header>
        <?php include("header.php"); ?>
        <?php include("login.php"); 
        $_SESSION['actual'] = "index.php"?>
        </header>
        <nav>
            <a href="store.php">Visit our store</a>
        </nav>
        <section>
            <h2>Manage Accounts</h2>
        <div id="edituser" >
<?PHP
if (!isset($hitman)) 
        {
?>
            <form action="edituser.php" method="POST">
                <input type="hidden" name="ID" value="<?PHP echo $_POST['ID']?>"/>
                <input type="text" name="login" value="<?PHP echo $users[0]['login']?>"></input>
                <input type="password" name="passwd" value=""></input>
                <input type="submit" name="action" value="delete"/>
                <input type="submit" name="action" value="edit"/>
            </form>
<?PHP
        }
?>
        <a href="admin.php">Admin mode</a>
	   </div>
            <div id="notifications" >
            </div>
        </section>
</div>
</body>
</html>
