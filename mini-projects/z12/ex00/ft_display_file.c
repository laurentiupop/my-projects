/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 11:25:29 by flpop             #+#    #+#             */
/*   Updated: 2014/09/18 15:55:59 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
void		ft_display_file(int fd)
{
	char	fisier;

	while (read (fd, &fisier, 1) != 0)
		write (1, &fisier, 1);
}

int			main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		if (argc > 2)
			write (2, "Too many arguments.", 20);
		if (argc < 2)
			write (2, "File name missing.", 19);
		return (1);
	}
	fd = open (argv[1], O_RDONLY);
	ft_display_file (fd);
	close (fd);
	return (0);
}
