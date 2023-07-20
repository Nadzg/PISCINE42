/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aletoire.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:51:49 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/09 19:02:36 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void	ft_aleatoire(int map[4][4])
{
	int	i;
	int	j;
	srand(time(NULL));

	i = 0;
	j = 0;
	while (i < 4 && j < 4)
	{
		while (i < 4)
		{
			if ((map [1][j] != map [i][j]) && (map [2][j] != map [i][j]) && (map [i][j] != map [3][j]))	
			{
				map[i][j] = rand()%4 +1 ;
				i++;
			}
			else
			{
				main();
			}
		}
	i = 0;	
	j++;
	}
}
