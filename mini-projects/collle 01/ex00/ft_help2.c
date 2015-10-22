/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbretoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 18:39:52 by rbretoiu          #+#    #+#             */
/*   Updated: 2014/09/14 19:19:41 by rbretoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkc(int pos[9][9])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			k = j + 1;
			while (k < 9)
			{
				if (pos[i][j] != 0)
					if (pos[i][j] == pos[i][k])
						return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_checkr(int pos[9][9])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			k = j + 1;
			while (k < 9)
			{
				if (pos[j][i] != 0)
					if (pos[j][i] == pos[k][i])
						return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_checkall(int pos[9][9])
{
	if (ft_checkc(pos) && ft_checkr(pos))
		return (1);
	return (0);
}
