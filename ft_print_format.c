/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <mohabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:05:39 by mohabid           #+#    #+#             */
/*   Updated: 2024/11/15 10:54:06 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (spec == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		count += ft_putnbr_lower(va_arg(ap, int), 10);
	else if (spec == 'u')
		count += ft_putnbr_lower(va_arg(ap, unsigned int), 10);
	else if (spec == 'x')
		count += ft_putnbr_lower(va_arg(ap, unsigned int), 16);
	else if (spec == 'X')
		count += ft_putnbr_upper(va_arg(ap, unsigned int), 16);
	else if (spec == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putnbr_pointer(va_arg(ap, unsigned long), 16);
	}
	else if (spec == '%')
		count += ft_putchar('%');
	return (count);
}