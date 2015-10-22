/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 12:31:33 by flpop             #+#    #+#             */
/*   Updated: 2014/09/18 15:50:49 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
void		ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		write (2, &s[i], 1);
		i++;
	}
}

void		display(int argc, char **argv)
{
	char	fis;
	int		i;
	int		fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &fis, 1) != 0)
				write(1, &fis, 1);
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory");
			ft_putstr("\n");
		}
		close (fd);
		i++;
	}
}

int			main(int argc, char **argv)
{
	char	fis;

	if (argc < 2 || argv[1][0] == '-')
		while (read(0, &fis, 1) != 0)
			write(1, &fis, 1);
	display(argc, argv);
	return (0);
}
