<?php
function auth($login, $passwd)
{
	$data = file_get_contents("../private/passwd");
	$data = unserialize($data);
	$hash_pwd = hash(sha512, $passwd);
	foreach ($data as $array)
	{
		if ($array['login'] == $login && $array['passwd'] == $hash_pwd)
		{
			return (TRUE);
		}
	}
	return (FALSE);
}
?>
