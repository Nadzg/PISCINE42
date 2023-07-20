/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:55:13 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/09 23:04:18 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_split_arg(char *string, int idx_c_r, int c);
int	ft_checkclig(int tab_res[4][4], char *string, int y);
int	ft_checkcol(int tab_res[4][4], char *string, int x);
void	ft_aleatoire(int map[4][4]);

int	main()
{
	char	string[] = "4 3 2 1 1 2 2 2 1 2 2 2 4 3 2 1"
	ft_split_arg(char *string, int idx_c_l, int c);
	int	map[4][4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_aleatoire(map);
	if (ft_checkcol(map, string) == 1 && ft_checklig(map, string) == 1)
	{
		while (i < 4)
		{
			printf("%d", map[i][j]);
			i++;
		}
		printf("\n");
		i = 0;
		j++;	
	}
	else
	{
		ft_aleatoire(map);
	}
	return (0);
}	
