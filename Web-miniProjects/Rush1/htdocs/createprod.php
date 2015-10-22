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
	$sql = "SELECT name FROM categories";
	$cate = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
//	mysqli_free_result($users);
	$info = array("name"=>"","category"=>"", "price"=>"", "quantity"=>"","pitch"=>"","content"=>"", "img"=>"");
    if (isset($_POST['action']) && $_POST['action'] == "create")
    {
        if (miss_info($info))
            echo 'Fill in the Fields Biatch';
        else
        {
            if (createnewprod($db, $cate))
            {
                echo 'Product created';
                $info = array("name"=>"","category"=>"", "price"=>"", "quantity"=>"","pitch"=>"","content"=>"", "img"=>"");
            }
            else
                echo 'Il y a une couille dans le pate';
        }
       
    }
    mysqli_close($db);
}
?>

<html>
<head>
	<meta http-equiv="content-type" content="text/html; charset=utf-8" />
	<title>Hd</title>
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
        <section>
        <div id="createprod" >
            <form action="createprod.php" method="POST">
                <input type="text" name="name" value="<?PHP echo $info['name'];?>"></input>      
            <select name="category">
            <?PHP
            foreach ($cate as $elem){
                echo '<option value="'.$elem['name'];
                if ($elem['name'] == $info['category'])
                    echo '" selected   >'.$elem['name'].'</option>';
                else    
                    echo '" >'.$elem['name'].'</option>';
            }
            ?>    
            </select>
            
            <input type="number" name="quantity" min="0" max="100"  value="<?PHP echo $info['quantity'];?>"></input>    
            <input type="number" name="price" min="0" max="10000"  value="<?PHP echo $info['price'];?>"></input>
                <input type="text" name="pitch" value="<?PHP echo $info['pitch'];?>"></input>
                <input type="textarea" name="content" value="<?PHP echo $info['content'];?>"></input>
                <input type="text" name="img" value="<?PHP echo $info['img'];?>"/>
                <input type="submit" name="action" value="create"/>
            </form>
        <a href="admin.php">Admin mode</a>
	   </div>
            <div id="notifications" >
            </div>
        </section>
</div>

</body>
</html>
