/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/26 23:53:40 by flpop             #+#    #+#             */
/*   Updated: 2014/09/27 00:15:32 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main (int argc, char **argv)
{
	int i;
	int j;
	int c;

	c = 0;
	i = 0;
	j = 0;
	while (argv[1][i] && argv[2][j])
	{
			if(argv[1][i] == argv[2][j])
			{
				j++;
					c = 1;
			}
			else 
				c = 0;
		i++;
	}
	if (argv[2][j] != '\0')
		c = 0;
	printf ("%d" ,c);
	return (0);
}
