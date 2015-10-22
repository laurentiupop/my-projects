#!/usr/bin/php
<?php
if (is_readable($path)){
if ($argc < 2)
	exit;
if ($argc > 3)
	exit;
$handle = fopen(trim($argv[1]),"r");
$line = fgets($handle);
while ($line)
{
	$ok = 0;

	$i = 0;
	while ($i < strlen($line))
	{
		if($line[$i] == 'a' && $line[$i - 1] == '<')
		{
			$ok = 1;
		}
		if ($line[$i] == 't' && $line[$i + 1] == 'i' && $line[$i + 2] == 't' && $line[$i + 3] == 'l' && $line[$i + 4] == 'e' && $ok == 1) 
		{
			$i+=7;
			echo( "title=\"");
			while ($line[$i] != "<")
			{
				echo( strtoupper($line[$i]));
				$i++;
			}
			echo( $line[$i]);
		}
		else  echo($line[$i]);
		if ($ok == 1 && $line[$i]=='>')
		{
			$i++;
			while ($line[$i] != '<')
			{
				echo(strtoupper($line[$i]));
				$i++;
			}
			echo($line[$i]);
		}
		if ($line[$i] == 'a' && $line[$i - 1] == '/')
			$ok = 0;
		$i++;


	}
	$line = fgets($handle);
}}
?>
