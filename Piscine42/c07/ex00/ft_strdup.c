/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:30:16 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/17 20:09:29 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;

	size = ft_strlen(src);
	copy = malloc(1 * size);
	if (copy == NULL)
		return ("0");
	ft_strcpy(copy, src);
	return (copy);
}
