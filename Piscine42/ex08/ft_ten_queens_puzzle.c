/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:24:29 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/17 16:28:08 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_initialize_puzzle(void)
{
    int size;
    int **map;
    int nds;
    int j;

    size = 10;
    map = malloc(sizeof(int) * 100);
    /*map = malloc(sizeof(sizeof(int)*size)* size);*/
    map[][] = {0};
    nds = 0;
    j = 0;
}

int ft_ten_queens_puzzle(void)
{
    int flag_ri;
    int i;
    int j;
    int lig;
    int **map;
    int **posmap;
    int **pos;

    flag_ri = 1;
    i = 0;
    lig = 0;
    map = ft_initialize_puzzle();
    *pos[2]= {0};
    /*affecter les positions*/
    while (flag_ri <= 9)
    {
        if(map[lig][flag_ri] == 0);
            {
                ft_ten_queens_puzzle();
            }
            flag_ri++;
        }
        if (flag_ri == 10)
        {
            map[lig][flag_ri] = ft_strcat(-lig, flag_ri);
            pos[lig] = {lig, flag_ri};
        }
        lig++;
    lig = 0;
    while (lig < 10)
    {
        flag_ri = 0;
        while(flag_ri < 10)
        {
            if(lig == pos[lig][0] && flag_ri == pos[lig][1] && posemap[lig][flag_ri] == 0)
                {
                    i = 0;
                    j = 0;
                    while (j < 9)
                    {
                        posemap[lig][j] = ft_strcat(lig,flag_ri);
                        j++;
                        flag_ri++;
                        while (i > 9)
                        {
                            posemap[i][flag_ri] = ft_strcat(lig,flag_ri);
                            posemap[i][j] = ft_strcat(lig,flag_ri);
                            i++;
                        }
                    }
            }
        }
        lig++;
    }


    lig = 0;
    while (lig < 10)
    {
        flag_ri = 0;
        while(flag_ri < 10)
        {
            flag_ri++
        }
        lig++;
    }
/*reinitialiser la grille*/
/*return values*/
    while (i < 10)
    {
	    while (j < 10)
	    {
		    if (posemap[i][j] < 0)
		    res[i][0] = (posemap[i][j] * -1) / 10;
		    res[i][1] = (posemap[i][j] * -1) % 10;
		    j++;
	    }
	    i++;
    }
    return res;
}
/*
flag = row index {0,1,2,3, ,10}
test if there is a row where empty -> not attacked zone
actualiser la valeur de la case en fonction de la position precedante
si aucune solution n'est trouver si flag > n - 1 (parcours) > rappelle de la fonction
si le flag = n-1: une solution a ete trouvee -> marquer la position et l'imprimer a l'ecran
une fois la solution sauvegarder dans la matrice & dans tout les cas -> enlever la reine et ses effets sur la solution
ecrire les solutions */

int main()
{
	ft_ten_queens_puzzle();

    /*initialiser l'echequier a 10x10
    assigner la valeur 0 a toutes les cases
    appelle de la fonction n queen
    affichage de la grille et du nb de positions possibles + coordonnes*/
}

/*
Écrire une fonction qui affiche toutes les possibilités de placer dix dames sur un
échiquier de 10x10 sans qu’elles ne puissent s’atteindre en un seul coup.
• La recursivité devra être utilisée.
• La valeur de retour de votre fonction devra être le nombre de solutions affichée.
*/
