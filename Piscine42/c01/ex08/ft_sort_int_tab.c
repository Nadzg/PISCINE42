/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:35:26 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/08 20:37:24 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i + 1] < tab[i])
		{
			ft_swap(&tab[i + 1], &tab[i]);
			i = 0;
		}
	i++;
	}
	if (tab[0] > tab[1])
	{
		ft_swap(&tab[0], &tab[1]);
	}
}

/*int	main(void)
{
	int	test[5];
	test[5] = {2, 6, 3, 7, 8};
	ft_sort_int_tab(test, 5);
	printf("%d %d %d %d", test[0], test[1], test[2], test[3]);
}
*/
