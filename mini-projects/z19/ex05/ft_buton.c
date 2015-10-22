/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buton.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 22:35:36 by flpop             #+#    #+#             */
/*   Updated: 2014/09/18 22:35:40 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_bouton(int i, int j, int k)
{
	int v[3];
	int index;
	int aux;

	v[0] = i;
	v[1] = j;
	v[2] = k;
	index = 0;
	while (index < 2)
	{
		if (v[index] > v[index + 1])
		{
			aux = v[index];
			v[index] = v[index + 1];
			v[index + 1] = aux;
		}
		index++;
	}
	return (v[1]);
}
