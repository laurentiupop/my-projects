use db_flpop;
UPDATE ft_table
SET `date_de_creation` = DATE_ADD(`date_de_creation`, INTERVAL 20 year) 
WHERE id > 5;
