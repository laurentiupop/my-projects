

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";

CREATE TABLE IF NOT EXISTS `users` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `login` varchar(80) NOT NULL,
  `hash` varchar(64) NOT NULL,
  `admin` tinyint(1) DEFAULT '0',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;



INSERT INTO `users` (`ID`, `login`, `hash`, `admin`) VALUES
(1, 'flpop', '', 1),
(2, 'admin', '', 1);

