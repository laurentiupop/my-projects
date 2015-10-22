/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 19:04:23 by flpop             #+#    #+#             */
/*   Updated: 2014/09/09 19:04:36 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_safe(int rows[8], int x, int y)
{
	int i;

	if (y == 0)
		return (1);
	i = 0;
	while (i < y)
	{
		if (rows[i] == x || rows[i] == x + y - i || rows[i] == x - y + i)
			return (0);
		i++;
	}
	return (1);
}

int ft_eight_queens_helper(int rows[8], int y)
{
	int			x;
	static int	contoru = 0;

	x = 0;
	while (x < 8)
	{
		if (ft_is_safe(rows, x, y))
		{
			rows[y] = x;
			if (y == 7)
				contoru++;
			else
				ft_eight_queens_helper(rows, y + 1);
		}
		x++;
	}
	return (contoru);
}

int ft_eight_queens_puzzle(void)
{
	int rows[8];

	return (ft_eight_queens_helper(rows, 0));
}
