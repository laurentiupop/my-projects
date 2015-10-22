#!/usr/bin/php
<?php

function ft_split($string)
{
	$array2 = array();
	$array = explode(" ", $string);
	foreach ($array as $value)
	{
		if ($value != "")
			array_push($array2, $value);
	}
	sort($array2);
	return $array2;
}


$da = array();
for ($i = 1; $i < $argc ;$i++)
	$da = ft_spli3rgv[i]);
echo $da[1];


?>
