/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:30:59 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/17 11:40:45 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_str_lenth(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_tousdif(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_baseval(char *base)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] > 32 && base[i] <= 126 && base[i] != 45 && base[i] != 43)
			c++;
		i++;
	}
	if (c == i)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	x;
	int	i;

	i = ft_str_lenth(base);
	x = 0;
	n = 0;
	if (!ft_baseval(base) || !ft_tousdif(base))
		return (x);
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n++;
		str++;
	}
	while (*str && ft_is_in_base(*str, base) >= 0)
	{
		x = x * i + ft_is_in_base(*str, base);
		str++;
	}
	if (n % 2 == 1)
		return (x * -1);
	return (x);
}

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}
