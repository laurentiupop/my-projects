<?php
	$db = mysqli_connect('localhost', 'root', 'cristina26', 'store', '3306');
	if (mysqli_connect_error())
	{
		echo mysqli_connect_error();
		exit ();
	}
	else
	{
		echo "Successful database connection" ;
	}
?>
