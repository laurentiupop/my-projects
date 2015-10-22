/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sir.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:32:58 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:33:01 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_prior[10];
char	g_op[10];
int		g_nr[10];
int		g_i = 0;
int		g_opch = 0;
int		g_ok = 0;
void	ft_rezolv(void);
void	ft_nb(char	*str, int	*j)
{
	int		nb;
	int		i;

	nb = 0;
	i = *j;
	while (*(str + i) != ' ' && *(str + i) != '\0' && *(str + i) != ')' &&
			*(str + i) != '(' && *(str + i) != '+' && *(str + i) != '-' &&
			*(str + i) != '*' && *(str + i) != '%' && *(str + i) != '/')
	{
		nb *= 10;
		nb += *(str + i) - 48;
		i = i + 1;
	}
	g_nr[g_i] = nb;
	g_i++;
	*j = i;
}

void	ft_siro(char	c)
{
	if (c == '+' || c == '-')
	{
		g_prior[g_opch] = g_ok + 1;
		g_op[g_opch] = c;
	}
	else
	{
		g_prior[g_opch] = g_ok + 2;
		g_op[g_opch] = c;
	}
	g_opch++;
}

void	ft_parant(char	c)
{
	if (c == ')')
		g_ok -= 2;
	else
		g_ok += 2;
}

void	ft_sir(char		*str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
			i++;
		if (*(str + i) >= '0' && *(str + i) <= '9')
			ft_nb(str, &i);
		if (*(str + i) == '*' || *(str + i) == '/' || *(str + i) == '%' ||
				*(str + i) == '+' || *(str + i) == '-')
		{
			ft_siro(*(str + i));
			i++;
		}
		if (*(str + i) == ')' || *(str + i) == '(')
		{
			ft_parant(*(str + i));
			i++;
		}
	}
	ft_rezolv();
}
