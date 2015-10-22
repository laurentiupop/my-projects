/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 23:35:02 by flpop             #+#    #+#             */
/*   Updated: 2014/09/26 21:26:42 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 2)
		return (index);
	printf("%d\n", index);
	if (index < -1)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main (void)
{
	int i;
	i = 6;
	printf("%d", ft_fibonacci(i));
	return (0);
}
