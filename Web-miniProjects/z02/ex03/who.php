#!/usr/bin/php
<?php
date_default_timezone_set('CET');
$file = fopen("/var/run/utmpx", "r");
while($details = fread($file, 628))
{
	$details_unpack= unpack("a256user/a4id/a32line/ipid/itype/I2time/a256host/i16pad", $details);
	if ($details_unpack["type"] == 7)		
	{	
		$user = $details_unpack["user"];
		$line = $details_unpack["line"];
		$month = date("M",$details_unpack["time1"]);
		$day = date("j", $details_unpack["time1"]);
		$hour = date("H", $details_unpack["time1"]);
		$min = date("i", $details_unpack["time1"]);
		$L[] = $user . "\t " . $line . "  " . $month . " " . $day . " " . $hour . ":" . $min;
	}	
}
sort($L);
for($i = 0;$i < sizeof($L);$i++)
{
	print_r("$L[$i] \n");
}
?>
