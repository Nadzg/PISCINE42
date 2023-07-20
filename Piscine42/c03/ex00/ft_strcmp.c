/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:58:32 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/12 07:08:29 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char s1[] = "Test1";
	char s2[] = "OK";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";

	printf("%d, %d\n", ft_strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("%d, %d\n", ft_strcmp(s3, s4), ft_strcmp(s3, s4));
	printf("%d, %d\n", ft_strcmp(s5, s6), ft_strcmp(s5, s6));
	printf("%d, %d\n", ft_strcmp(s5, s5), ft_strcmp(s5, s5));
	return (0);
}
*/
