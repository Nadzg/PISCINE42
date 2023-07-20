/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ange.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:43:54 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/11 16:48:51 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	i;
	int	*res_tab;

	i = 0;
	length = max - min + 1;
	res_tab = malloc(length * sizeof(int));
	if (!res_tab)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		res_tab[i] = min;
		min++;
		i++;
	}
	return (res_tab);
}
