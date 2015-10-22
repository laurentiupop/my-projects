<?php
session_start();
if (isset($_POST["valider"]))
{
	$content = file_get_contents("connect.php");
	$content = explode(",", $content);
	$content[2] = " '".$_POST["dbpw"]."'";
	$content[3] = " '".$_POST["dbname"]."'";
	$content = implode($content, ",");
	file_put_contents("connect.php", $content);
	$db = mysqli_connect('localhost', 'root', $_POST["dbpw"], $_POST["dbname"], '3306');
	if (mysqli_connect_error())
	{
		$logMessage = 'MySQL Error: ' . mysqli_connect_error();
echo "
<link rel=\"stylesheet\" href=\"style.css\" />
<form style=\"position:relative;width:400px;height:200px;margin-left:30%;margin-top:45%;background:white;padding:30px;border-radius:200px;display:inline-block;text-align:center;padding-top:50px;font-family:courier;\" action=\"install.php\" method=\"post\" accept-charset=\"utf-8\">
</style>		
		Error... Could not connect to the database !
 <label>Please enter your dbname again (test by default): </label><br /><br />
<input type=\"text\" name=\"dbname\" id=\"dbname\" value=\"test\"/><br /><br/>
<label>Enter your password :</label></br><br/>
<input type=\"password\" name=\"dbpw\" id=\"dbpw\" /><br/><br/>
<input type=\"submit\" name=\"valider\" value=\"Validate\" />
<div id =\"preload\"></div>
</form>";
	die;
	}
	else
	{
	$sql = "
	CREATE TABLE IF NOT EXISTS `users` (
	  `ID` int(11) NOT NULL AUTO_INCREMENT,
	  `login` varchar(80) NOT NULL,
	  `passwd` varchar(256) NOT NULL,
	  `admin` tinyint(1) DEFAULT '0',
	  PRIMARY KEY (`ID`)
	) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;
	";
	mysqli_query($db, $sql);

	$sql = "
	INSERT INTO `users` (`ID`, `login`, `passwd`, `admin`) VALUES
	(1, 'flpop', 'cristina26', 1),
	(2, 'admin', 'adminadmin', 0);";
	mysqli_query($db, $sql);
        
    $sql = "
	CREATE TABLE IF NOT EXISTS `categories` (
	  `ID` int(11) NOT NULL AUTO_INCREMENT,
	  `name` varchar(80) NOT NULL,
	  PRIMARY KEY (`ID`)
	) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;
	";
	mysqli_query($db, $sql);

	$sql = "
	INSERT INTO `categories` (`name`) VALUES
    ('guitar'),
    ('vioara'),
    ('flaut'),
    ('tobe');";
	mysqli_query($db, $sql);   
        

	$sql = "
		CREATE TABLE  `products` (
			  `ID` int(11) NOT NULL AUTO_INCREMENT,
			    `name` varchar(80) DEFAULT NULL,
				  `category` varchar(80) DEFAULT NULL,
				    `price` varchar(20) DEFAULT NULL,
					  `quantity` int(10) DEFAULT NULL,
					    `pitch` varchar(100) DEFAULT NULL,
						  `content` varchar(500) DEFAULT NULL,
						    `img` varchar(200) DEFAULT NULL,
							  PRIMARY KEY (`ID`)
						  ) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=112 ;
";
	mysqli_query($db, $sql);

	$sql = "
		INSERT INTO `products` (`ID`, `name`, `category`, `price`, `quantity`, `pitch`, `content`, `img`) VALUES
		(1, 'chitara1 ', 'guitar', '123.21', 17, 'Discover this %name right now !', 'dada', 'c1.jpg'),
		(2, 'chitara2 ', 'guitar', '245.21', 17, 'Discover this %name right now !', 'dada', 'c22.jpg'),
		(3, 'chitara3 ', 'guitar', '233.21', 17, 'Discover this %name right now !', 'dada', 'c33.jpg'),
		(4, 'chitara4 ', 'guitar', '1000.21', 17, 'Discover this %name right now !', 'dada', 'c4.jpg'),
		(5, 'chitara5 ', 'guitar', '344.21', 17, 'Discover this %name right now !', 'dada', 'c5.jpg'),
		(6, 'tobe1 ', 'tobe', '2344.21', 17, 'Discover this %name right now !', 'tobe', 't1.jpg'),
		(7, 'tobe2 ', 'tobe', '3453.21', 17, 'Discover this %name right now !', 'tobe', 't2.jpg'),
		(8, 'tobe3 ', 'tobe', '122.21', 17, 'Discover this %name right now !', 'tobe', 't3.jpg'),
(9, 'vioara1 ', 'vioara', '122.21', 17, 'Discover this %name right now !', 'vioara', 'v3.jpg'),
(11, 'flaut1 ', 'flaut', '334.25', 44, 'Here is the so long waited %name.', 'vioara', 'f11.jpg'),
(12, 'flaut2 ', 'flaut', '334.25', 44, 'Here is the so long waited %name.', 'vioara', 'f12.jpg'),
(13, 'flaut3', 'flaut', '334.25', 44, 'Here is the so long waited %name.', 'vioara', 'f13.jpg'),
(14, 'vioara3 ', 'vioara', '212.29', 3, 'This %name is just a treasure !', 'vioara', 'v2.jpg');
";
	mysqli_query($db, $sql);

	mysqli_close($db);

	
	echo "
	<link rel=\"stylesheet\" href=\"style.css\" />
	<form style=\"position:relative;width:400px;height:200px;background:white;border-radius:200px;display:inline-block;text-align:center;font-family:arial;\" action=\"install.php\" method=\"post\" accept-charset=\"utf-8\">
	</style>";
	echo "Connection successfull ! <br /><a href=\"index.php\">Deschide Music Shop acum!</a>
	</form>";
	}
}
else
{
echo "
<link rel=\"stylesheet\" href=\"style.css\" />
<form style=\"position:relative;width:400px;height:200px;background:white;border-radius:200px;display:inline-block;text-align:center;font-family:arial;\" action=\"install.php\" method=\"post\" accept-charset=\"utf-8\">
</style>		
<label>Enter your data_base_name : </label><br /><br />
<input type=\"text\" name=\"dbname\" id=\"dbname\" value=\"test\"/><br /><br/>
<label>Enter your password :</label></br><br/>
<input type=\"password\" name=\"dbpw\" id=\"dbpw\" /><br/><br/>
<input type=\"submit\" name=\"valider\" value=\"Validate\" />
<div id =\"preload\"></div>
</form>";
}
