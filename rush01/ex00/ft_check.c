/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:08:43 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/09 16:35:28 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_checkcol(int tab_res[4][4], char *string, int x)
{
	int y;
	int	i;
	int	cu;
	int cd;
	int	max;

	cu = 1;
	cd = 1;

	y = 0;
	while (y < 4)
	/* verifier la colonne nx pdv up du tableau*/
	{
		if (tab_res[x][y+1] > tab_res[x][y]) 
		{
			max = tab_res[x][1+y];
			cu++;
		}
		y++;
	}
	y = 3 ;
	while (y >= 0)
	/* verifier la colonne nx pdv down du tableau*/
	{
		if (tab_res[x][y] > tab_res[x][y - 1]) 
		{
			max = tab_res[x][y - 1];
			cd++;
		}
		y--;
	}

	if (ft_split_arg(char *string, 0, x) == cu) && (ft_split_arg(char *string, 8, x) == cd)
	{
		return (1); /*return TRUE pour la col y*/
	}
	return(0);
}

int ft_checkclig(int tab_res[4][4], char *string, int y)
{
	int	x;
	int	i; 
	int	cu;
	int cd;
	int	max;

	cu = 1;
	cd = 1;

	x = 0;
	while (x < 4)
	/* verifier la colonne nx pdv up du tableau*/
	{
		if (tab_res[x][y+1] > tab_res[x][y]) 
		{
			max = tab_res[x][1+y];
			cu++;
		}
		x++;
	}
	x = 3 ;
	while (x >= 0)
	/* verifier la colonne nx pdv down du tableau*/
	{
		if (tab_res[x][y] > tab_res[x - 1][y]) 
		{
			max = tab_res[x - 1][y];
			cd++;
		}
		x--;
	}

	if ((ft_split_arg(char *string, 16, y)) == cu) && (ft_split_arg(char *string, 24, y) == cd)
	{
		return (1); /*return TRUE pour la col y*/
	}
	return(0);
}


