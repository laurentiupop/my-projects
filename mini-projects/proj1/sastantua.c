/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   da.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 18:00:47 by flpop             #+#    #+#             */
/*   Updated: 2014/10/09 17:59:59 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int		spaces_calc(int n)
{
	int		size;
	int		lungime;
	int		line;

	size = 1;
	lungime = 7;
	line = 3;
	while (size < n)
	{
		lungime += 6 + ((size - 1) / 2) * 2;
		lungime += (line * 2);
		size++;
		line++;
	}
	return ((lungime - 3) / 2);
}

void	ft_putwhile(char c, int x)
{
	while (x--)
		ft_putchar(c);
}

void	ft_door(int height, int line, int spaces, int prev)
{
	int		i;

	i = 0;
	prev = (prev - height) / 2;
	while (i < line)
	{
		ft_putwhile(' ', spaces - i - height % 2);
		ft_putchar('/');
		ft_putwhile('*', prev + i + height % 2);
		if (i == line / 2 && height > 3)
		{
			ft_putwhile('|', 1 + height - height % 2 - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			ft_putwhile('|', 1 + (height / 2) * 2);
		ft_putwhile('*', prev + i + height % 2);
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

int		ft_print_lines(int height, int line, int spaces, int prev)
{
	int		i;
	int		nr;

	i = 0;
	while (i < line)
	{
		ft_putwhile(' ', spaces - i);
		ft_putchar('/');
		ft_putwhile('*', prev + i * 2);
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
	nr = ((i - 1) * 2 + 6 + (height / 2) * 2);
	return (nr);
}

void	sastantua(int size)
{
	int		line;
	int		height;
	int		spaces;
	int		stars;

	if (size >= 1)
	{
		spaces = spaces_calc(size);
		height = 0;
		line = 3;
		stars = 1;
		while (height < (size - 1))
		{
			stars += ft_print_lines(height, line, spaces, stars);
			spaces -= (2 + line);
			spaces -= (height / 2);
			height++;
			line++;
		}
		ft_print_lines(height, 2 + height % 2, spaces, stars);
		ft_door(height, line - 2 - height % 2, spaces - 2, stars + 4);
	}
}
