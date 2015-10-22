USE db_flpop;
SELECT `titre`,`resum` FROM `film` WHERE `resum` LIKE '%vincent%' ORDER BY `id_film` ASC;
