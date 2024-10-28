/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:03:21 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/24 00:11:31 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int value)
{
	int	digits;

	digits = 0;
	while (value)
	{
		value /= 10;
		digits++;
	}
	return (digits);
}

static char	*negative_itoa(int n)
{
	int		digits;
	int		i;
	char	*str;

	digits = count_digits(n);
	str = (char *)malloc((digits + 2) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
			return ("-2147483648");
		str[0] = '-';
		n = -n;
		i = digits;
		while (i > 0)
		{
			str[i] = n % 10 + '0';
			n /= 10;
			i--;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	digits = count_digits(n);
	if (n < 0)
		str = negative_itoa(n);
	else
	{
		str = (char *)malloc((digits + 1) * sizeof(char));
		if (!str)
			return (NULL);
		str[digits] = '\0';
		if (n == 0)
			str[0] = '0';
		digits--;
		while (digits >= 0)
		{
			str[digits] = n % 10 + '0';
			n /= 10;
			digits--;
		}
		return (str);
	}
	return (str);
}
/*
int	main(void)
{
	int n = -568641236;
	char *str = ft_itoa(n);
	printf("%s \n",str);
	return (0);
}*/
