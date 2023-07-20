/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube444.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:22:13 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/08 12:34:02 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdlib.h>
#include<stdio.h>

/*
void	ft_makespace(int h, int la, int lo)
{	
	ft_putchar(spc_lefth);
	ft_putchar(spc_lefth);
	ft_putchar(spc_lefth);

}
*/


char	*ft_assoc_colrow (char *string)
{
	int col1up = string[0];
	int col2up = string[2];
	int col3up = string[4];
	int col4up= string[6];
	int col1down = string[8];
	int col2down; string[10];
	int col3down = string[12];
	int col4down = string[14];
	int row1left = string[16];
	int row2left = string[18];
	int row3left = string[20];
	int row4left = string[22];
	int row1right = string[24]; 
	int row2right = string[26];
	int row3right = string[28];
	int row4right = string[30];
	if (col1up == row1left && col2up == row2left && col3up == row3left && col4up == row4left) 
	char arg_tab[16] = {col1up, col2up, col3up, col4up, col1down, col2down, col3down, col4down, row1left, row2left,
	row3left, row4left, row1right, row2right, row3right, row4right}
	return (arg_tab)
}
char ft_printstg(????)
/*
void ft_printval(char nb, int tab_res[], char tab_arg[]) /* int lig arg ?*/
{
		int	lig;
		i = 0;
		
		while (i < 4)
		{
		if ((tab_arg[i] == '4')&&(i < 4))
			tab_res[0][i] = {1, 2, 3, 4};
		if ((tab_arg[i] == 3)&&(tab_arg[i + 4]) == 2)
			tab_res[0][i] = {1, 3, 4, 2};
		if ((tab_arg[i] == 2)&&(tab_arg[i + 4]) == 2)
			tab_res[0][i] = {3, 4, 1, 2};
		if ((tab_arg[i] == 1)&&(tab_arg[i + 4]) == 1)
			tab_res[0][i] = {4, 1, 2, 3};
		if ((tab_arg[i] == 1)&&(tab_arg[i + 4]) == 2)
			tab_res[0][i] = {4, 1, 3, 2};
		i++;
		}
}
*/*/*/

int	ft_putstr4_1(char *string)
{
	int	lig;
	int	col;
	int i;
	int tab_res[4][4];
	char tab_arg[16];
	
	res [4][4]={0};
	lig = 0;
	col = 0;
	i = 0;
	res [4][4]={0};
	tab_arg = ft_assoc_colrow(string);

	while (tab_arg[i])
	{
		while(i <= 4)
		{
			if ( tab_arg[i] == '4')
			{
				while(tab_res[lig][0])
				{
					tab_res[lig][0] = {1 + lig}
					tab_res[0][col] = {1 + lig};
					lig++;
					col++;
				}
			}
		i++;
		}
	}
	printf("%i %i %i %i", tab_res[0][0], tab_res[0][1], tab_res[0][2], tab_res[0][3]);
	return (tab_res);
}

/* coordonnees des lignes remlies => test sur la case == 0 ?*/

int ft_check ()
/* 
- fonction recursive 
- rechercher le max =cube
- indentation dans les deux sens 
- si erreur renvoyer les  coordonnees 

- corriger les coordonnee 
- rappelle de la fonction test*/

int ft_cube44(char *string)
{
	int tab_res[4][4] = {0};
	int	x;
	int y;
	int c;
	int i;
	int	j;

	x = 0;
	y = 0;
	c = 1; /*compteur jusqu'a la valeur max = 4 par rapport a l'argument de la fonction*/
	i = 0;

	while (x < 3)
	{
		while(y < 3)
		{
			tab_res = ft_putstr4_1();

			tab_res[0][y] = 1 + i; 
			tab_res[x][0] = 1 + i;

			if (tab_res[x][y+1] > tab_res[x][y])
			{
				max[x] = tab_res[x][1+y]
				c++;
			}
			if(tab_arg[i] == c)
			{	


				/*  CHECKKKK*/	
				j = 0;
				while (j < 4)
				{
					ft_putchar(tab_res[x][i]);
					j++;
				}
			}
			else (i < 3)
			{
				
			}
		y++;
		}
	x++;
	}
}






