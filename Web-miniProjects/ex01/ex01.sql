use db_flpop;
CREATE TABLE IF NOT EXISTS `ft_table` (
	  `id` int(100) NOT NULL AUTO_INCREMENT,
	  `login` varchar(8) NOT NULL DEFAULT 'toto',
	  `groupe` varchar(10) NOT NULL,
	  `date_de_creation` date NOT NULL,
	  PRIMARY KEY (`id`)
	) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=0 ;
