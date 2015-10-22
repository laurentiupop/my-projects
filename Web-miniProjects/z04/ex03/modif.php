<?php
if ($_POST['submit'] == "OK" && $_POST['login'] != "" && $_POST['oldpw'] != "" && $_POST['newpw'] != "")
{
	$data = file_get_contents("../private/passwd");
	$data = unserialize($data);
	$found = FALSE;
	$index = 0;
	$oldpw = hash(sha512, $_POST['oldpw']);
	foreach ($data as $array)
	{
		if ($array['login'] == $_POST['login'] && $array['passwd'] == $oldpw)
		{
			$found = TRUE;
		}
		$index++;
	}
	if ($found === TRUE)
	{
		$data[$index - 1]['passwd'] = hash(sha512, $_POST['newpw']);
		$data = serialize($data);
		file_put_contents("../private/passwd", $data);
		echo "OK\n";
	}
	else
	{
		echo "ERROR\n";
	}
}
else
{
	echo "ERROR\n";
}
?>
