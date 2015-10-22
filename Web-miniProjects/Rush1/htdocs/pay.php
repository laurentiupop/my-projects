<?php
session_start();
if (!isset($_SESSION["user"]))
	header("Location: store.php?error=signin");
else
{
    if (isset($_POST['END']) && $_POST['END'] === "Vreau instrumentele !")
    {
        print_r ($_POST);
        include("connect.php");
        if (mysqli_connect_error())
        {
            $logMessage = 'MySQL Error: ' . mysqli_connect_error();
            die('Could not connect to the database');
        }
        else
        {
            $sql = "SELECT id, quantity FROM products";
            $result = mysqli_fetch_all(mysqli_query($db, $sql), MYSQLI_ASSOC);
            foreach ($_SESSION["basket"] as $id => $item)
            {
                foreach ($result as $prod)
                {
                    if ($prod['id'] == $id)
                        $quant = $prod['quantity'] - $item["quantity"];
                }
                $que = 'UPDATE products SET quantity = "'.$quant.'" WHERE ID ='.$id;
                if (mysqli_query($db, $que) == FALSE)
                    header("Location: admin.php");
            }
            unset($_SESSION['basket']);
            header("Location: index.php");
        }
    }
}
?>
<h1>Comanda ta va fi procesata</h1>
    <a href="index.php">Te mai asteptam !</a>

