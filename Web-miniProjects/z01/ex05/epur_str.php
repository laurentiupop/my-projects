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
	$size2 = 1;
	$new = ft_split($argv[1]);
	$size = count($new);
	for ($i = 0; $i < $size; $i++)
	{
		echo $new[$i];
		if ($size2 < $size)
		{
			$size2++;
			echo " ";
	}}
		echo "\n";
	
?>
