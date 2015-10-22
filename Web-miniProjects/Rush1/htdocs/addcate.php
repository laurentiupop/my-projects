<?PHP
if (isset($_POST["action"]))
{
    if ($_POST['action'] == "supcate")
    {
        $que = 'DELETE FROM categories WHERE name = "'.$_POST['category'].'"';
			if (mysqli_query($db, $que) == FALSE)
				echo "Couldn't del";
            else
            {
                $que = 'DELETE FROM products WHERE category = "'.$_POST['category'].'"';
			     if (mysqli_query($db, $que) == FALSE)
				    echo "Couldn't del products";
                echo "del done";
            }
        unset($_POST);
    }
    if ($_POST['action'] == "addcate")
    {
        $que = 'INSERT INTO categories (ID, name) VALUES (NULL,"'.$_POST['newcate'].'")';
			if (mysqli_query($db, $que) == FALSE)
				echo "Couldn't add";
            else
                echo "add done";
        unset($_POST);
    }
}
$sql = "SELECT name FROM categories";
$cate = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
?>
<form action="admin.php" method="POST">
<input type="text" name="newcate">
<input type="submit" name="action" value="addcate">
  <select name="category">
            <?PHP
            foreach ($cate as $elem){
                echo '<option value="'.$elem['name'];
                if ($elem['name'] == $prod[0]['category'])
                    echo '" selected   >'.$elem['name'].'</option>';
                else    
                    echo '" >'.$elem['name'].'</option>';
            }
            ?>    
    </select>   
<input type="submit" name="action" value="supcate"  onClick="confirm( 'Do you really want to delete this and all the products related to it?' )">
</form>
    