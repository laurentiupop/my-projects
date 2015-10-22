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
?>
