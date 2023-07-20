#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void	ft_aleatoire(int	map[4][4])
{
	int	i;
	int	j;
	srand(time(NULL));/*graine: genere des variables diff a chaque iteration */

	i = 0;
	j = 0;
	while (i < 4 && j < 4)
	{
		while (i < 4 && map[i][j]!= map [i - 1] && map[i][j]!= map [i - 2] && map[i][j]!= map [i - 3])
		{
			map[i][j] = rand()%4 +1 ; /*rand genere tous les nb*/
			i++;
		}
	i = 0;	
	j++;
	}
}

int	main()
{
	int	map[4][4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_aleatoire(map);
	while (i < 4 && j < 4)
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
	return (0);
}	
