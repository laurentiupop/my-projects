#!/usr/bin/php
<?php
     while (1){ 
	echo "Entrez un nombre: ";
	
	if($a = trim(fgets(STDIN))){
	if (is_numeric($a))
		if($a % 2 ==0 ){
			echo "Le chiffre \"";
			echo $a;
			echo "\" est Pair\n";}
		else
		{
			echo "Le chiffre \"";
			echo $a;
			echo "\" est Impair\n";
		}
	else 
	{
			echo "\"";
			echo $a;
			echo "\" n'est pas un chiffre\n";
	}}
	else
	{
		echo "\n";
		exit;}
	 }
?>
