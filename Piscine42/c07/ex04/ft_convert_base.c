../ex05/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagallez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:17:42 by nagallez          #+#    #+#             */
/*   Updated: 2023/07/11 20:28:15 by nagallez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_baseto(int nbr, char *base_from)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if ((nbr >= 0) && (nbr < base_from))
		ft_putchar(nbr + '0');
	if (nbl >= base_from)
	{
		ft_putnbr(nbr / base_from);
		ft_putnbr(nbr % base_from);
	}
}
/* atoi pour regle nbr */
int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	nb[ft_strlen(str)];

	i = 0;
	n = 0;
	while (str[i] != '\0')
		/* car speciaux ok:' ', '+',i '-"*/
	{
		if (str[i] == '-')
			n++;
		if (n%2 == 1)
			write(1, "-", 1);
		if (ft_str_is_numeric(&str[i]) == 1)
		{
			ft_putnbr(str[i]);
			nb = str[i] - '0'; /* valeur decimal par rapport ascii */
			i++;
		}
	}


int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1
	if (power < 0)
	{
		return (0);
	}
	if ((power == 0)&&(nb == 0))
		return (1);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nbr_0;
	int	base_0;
	int	nbr_n;
	int	nbr_f;
	int	i;

	nbr_0 = ft_atoi(nbr);
	base_0 = ft_atoi(base_from);
	i = 0;
	nbr_n = 0;

	/* boucle while pour obtenir le nb en base neutre*/
	while (nbr > 0)
	{
		nbr = nbr / base_0;
		reste = nbr % base_0;
		nbr_n = nbr_n + reste * ft_iterative_power(i, base_0); 
		i ++;
	}
	/* boucle while pour mettre en base_to */
	while (nbr_n > 0)
	{
		nbr_f = nbr_n / base_f;
		reste = nbr_n % base_f;
	}
}
