/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:33:26 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:33:41 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_prior[5000];
char	g_op[5000];
int		g_nr[5000];
int		g_sum;
int		ft_max(void)
{
	int		i;
	int		max;

	i = 1;
	max = g_prior[0];
	while (g_prior[i] != 0)
	{
		if (max < g_prior[i])
			max = g_prior[i];
		i++;
	}
	return (max);
}

void	ft_clear(int	sum, int	i)
{
	int		j;

	j = i;
	g_nr[i] = sum;
	i++;
	while (g_nr[i + 1] != 0)
	{
		g_nr[i] = g_nr[i + 1];
		i++;
	}
	g_nr[i] = 0;
	while (g_prior[j + 1] != 0)
	{
		g_op[j] = g_op[j + 1];
		g_prior[j] = g_prior[j + 1];
		j++;
	}
	g_prior[j] = 0;
	g_op[j] = '\0';
}

void	ft_adun(int max, int i)
{
	g_sum = 0;
	while (g_prior[i] != max)
		i++;
	if (g_prior[i] % 2 == 0)
	{
		if (g_op[i] == '*')
			g_sum = g_nr[i] * g_nr[i + 1];
		else
		{
			if (g_op[i] == '/')
				g_sum = g_nr[i] / g_nr[i + 1];
			else	if (g_op[i] == '%')
				g_sum = g_nr[i] % g_nr[i + 1];
		}
	}
	else
	{
		if (g_op[i] == '-')
			g_sum = g_nr[i] - g_nr[i + 1];
		else	if (g_op[i] == '+')
			g_sum = g_nr[i] + g_nr[i + 1];
	}
	ft_clear(g_sum, i);
}

void	ft_rezolv(void)
{
	int		max;

	while (g_nr[1] != 0)
	{
		max = ft_max();
		ft_adun(max, 0);
	}
}
