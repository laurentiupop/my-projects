<?php
if ($_POST['submit'] == "OK" && $_POST['login'] != "" && $_POST['passwd'] != "")
{
	if (file_exists("../private/passwd") === FALSE)
	{
		mkdir("../private/");
		$data = array(array());
		$data[0]['login'] = $_POST['login'];
		$data[0]['passwd'] = hash(sha512, $_POST['passwd']);
		$data = serialize($data);
		file_put_contents("../private/passwd", $data);
		echo "OK\n";
	}
	else
	{
		$data = file_get_contents("../private/passwd");
		$data = unserialize($data);
		$found = FALSE;
		$index = 0;
		foreach ($data as $array)
		{
			if ($array['login'] == $_POST['login'])
				$found = TRUE;
			$index++;
		}
		if ($found === FALSE)
		{
			$data[$index]['login'] = $_POST['login'];
			$data[$index]['passwd'] = hash(sha512, $_POST['passwd']);
			$data = serialize($data);
			file_put_contents("../private/passwd", $data);
			echo "OK\n";
		}
		else
		{
			echo "ERROR\n";
		}
	}
}
else
{
	echo "ERROR\n";
}
?>
