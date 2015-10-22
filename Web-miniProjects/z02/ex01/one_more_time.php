#!/usr/bin/php
<?
function verifica($date)
{
	$format	= array(
		"day" => "/^[Ll]undi$|^[Mm]ardi$|^[Mm]ercredi$|^[Jj]eudi$|^[Vv]endredi$|^[Ss]amedi$|^[Dd]imanche$/",
		"day_nbr" => "/^[1-9]$|^[1-2][0-9]$|^3[01]$/",
		"month" => "/^[Jj]anvier$|^[Ff]evrier$|^[Mm]ars$|^[Aa]vril$|^[Mm]ai$|^[Jj]uin$|^[Jj]uillet$|^[Aa]out$|^[Ss]eptembre$|^[Oo]ctobre$|^[Nn]ovembre$|^[Dd]ecembre$/",
		"year" => "/^[0-9]{4}$/",
		"time" => "/^([0-1][0-9]|2[0-3]):([0-5][0-9]|60):([0-5][0-9]|60)$/",
	);
	if (count($date) != 5)
		return (FALSE);
	while ((list($key, $pattern) = each($format)) && (list(, $val) = each($date)))
		if (($ret = preg_match($pattern, $val)) === FALSE || $ret === 0)
			return (FALSE);
	return (TRUE);
}
if ($argc == 2)
{
	$date = explode(" ", $argv[1]);
	if (verifica($date) == FALSE)
	{
		echo "Wrong Format\n";
		exit;
	}
	else
	{
		$month = array (
			"1" => array ("Janvier", "janvier"), "2" => array ("Fevrier", "fevrier"),
			"3" => array ("Mars", "mars"), "4" => array ("Avril", "avril"),
			"5" => array ("Mai", "mai"), "6" => array ("Juin", "juin"),
			"7" => array ("Juillet", "juillet"), "8" => array ("Aout", "aout"),
			"9" => array ("Septembre", "septembre"), "10" => array ("Octobre", "octobre"),
			"11" => array ("Novembre", "novembre"), "12" => array ("Decembre", "decembre"),
		);
		foreach ($month as $key => $elem)
			foreach($elem as $elm)
				if (!strcmp($elm, $date[2]))
					$mois = $key;
		$hour = preg_split("/:/", $date[4]);
		if (checkdate($mois, $date[1], $date[3]) == FALSE)
		{
			echo "Wrong Format";
			exit;
		}
		date_default_timezone_set(UTC);
		echo mktime($hour[0], $hour[1], $hour[2], $mois, $date[1], $date[3], 1)."\n";
	}
}
?>
