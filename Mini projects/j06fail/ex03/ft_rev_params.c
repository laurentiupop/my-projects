/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 12:20:10 by flpop             #+#    #+#             */
/*   Updated: 2014/09/11 12:33:07 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	z;

	i = argc - 1;
	z = 0;
	while (i > 0)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i--;
	}
	return (0);
}
