use db_flpop;
INSERT INTO ft_table (login ,date_de_creation) SELECT nom,date_naissance FROM `fiche_personne` WHERE `nom` LIKE '%a%' ORDER BY `nom` ASC LIMIT 10;
UPDATE ft_table SET groupe = 'other' WHERE groupe ='';
