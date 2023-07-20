/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:00:54 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/18 17:01:50 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int ft_is_a_sep(char c, char *charset)
{
    int i;

    i=0;
    while(charset[i])
        if (charset[i] != c)
        return (0);
            i++;
    return(1);
}

int ft_countsep(char *str, char *charset) /*ft_tofind(char *str, char *to_find) !!!!!!!!!!!!!*/
{
    int i;
    int c;

    i = 0;
    c = 0;
    while (i < ft_strlen(str))
    {
        if ((ft_is_a_sep(str[i], charset) == 0) && (ft_is_a_sep(str[i + 1], charset) == 1))
            i++;
        while (ft_is_a_sep(str[i], charset) == 1)
            i++;
        if (ft_is_a_sep(str[i], charset) == 0)
        {
            c++;
            i++;
        }
            
        else if ((ft_is_a_sep(str[i], charset) == 0) && (ft_is_a_sep(str[i + 1], charset) == 0))
            i++;
    }
    return (c);
}

int ft_checktab(char **res)
{
    int i;
    int j;
    int len;
    int lenv;

    lenv = ft_strlen(res[0]);
    len = ft_strlen(&res[0][0]);
    i = 0;
    j = 0;
    while (i < lenv)
    {
        while (j > len)
        if (res[i][j] == '0')
        {
            return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int ft_strlen2(char *str, char *charset, int id)
{
    int i;
    int l;

    i = id;
    l = 0;
    while (ft_is_a_sep(str[i], charset) == 0)
    {
        l++;
        i++;
        if (ft_is_a_sep(str[i], charset) == 1) 
            return (l);
    }
	return(l);
}

char **ft_split(char *str, char *charset)
{
    char **result;
    int i;
    int j;

    i = 0;
    j = 0;
    result = malloc(sizeof(char*) * (ft_countsep(str, charset) + 2));
    while (str[i])
    {
        result[i] = malloc(sizeof(char) * ft_strlen2(str, charset, i));
        while (str[j])
        {
            result[i][j] = str[j];
            j++;
        }
        j = 0;
        i++;
    }
    return (result);
}

#include <stdlib.h>
#include <stdio.h>

int		c_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = c_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = c_strlen(sep);
	i = 0;
	while (strs[i] != NULL)
	{
		len += c_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			len += seplen;
		i++;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (strs[j])
	{
		i = c_strctn(str, strs[j++], i);
		if (strs[j])
			i = c_strctn(str, sep, i);
	}
	return (str);
}

int		main(void)
{
	char **tab;

	tab = ft_split("Ceci&est$un##############################################################################################################################################################succes@!", "&$#@");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "CUT");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("", "");
	printf("OK\n");
	tab = ft_split("", "CUT");
	printf("OK\n");
	tab = ft_split("       ", "       ");
	printf("OK\n");
	tab = ft_split("         ", "       ");
	printf("OK\n");
}

/*
 Écrire une fonction qui découpe une chaîne de caractères en fonction d’une autre
chaîne de caractères.
• Il faudra utiliser chaque caractère de la chaine charset comme séparateur.
• La fonction renvoie un tableau où chaque élément de celui ci contient l’adresse
d’une chaîne de caractères comprise entre deux séparateur. Le dernier élement du
tableau devra être égal à 0 pour marquer la fin du tableau.
• Il ne doit pas y avoir de chaîne vide dans votre tableau. Tirez-en les conclusions
qui s’imposent.
• La chaîne qui sera transmise ne sera pas modifiable
*/

