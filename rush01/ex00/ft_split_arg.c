/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:37:54 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/09 16:49:14 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
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
*/

int 	ft_split_arg(char *string, int idx_c_r, int c) /*colup idx = 0 / coldown idx = 8 / rowleft idx = 16 / rowright idx = 24*/ 
{
	int argxy;

	c = c - 1;
	argxy = string[idx_c_r + 2*c];
	return (argxy)
}
