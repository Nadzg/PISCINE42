/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:35:25 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/05 17:19:20 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_modulo(int i)
{
	int	i1;
	int	j1;

	i1 = i / 10 + '0';
	j1 = i % 10 + '0';
	ft_putchar(i1);
	ft_putchar(j1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		j = i + 1;
		while (j <= 99)
		{
			ft_modulo(i);
			ft_putchar(' ');
			ft_modulo(j);
			j++;
			if (i != 98)
				write (1, ", ", 2);
		}
		i++;
	}
}
