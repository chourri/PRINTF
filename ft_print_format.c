/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:15:45 by chourri           #+#    #+#             */
/*   Updated: 2023/12/24 16:08:53 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list arg)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(arg, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(arg, char *));
	else if (specifier == 'p')
		count += ft_print_pointer(va_arg(arg, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_number(va_arg(arg, int));
	else if (specifier == 'u')
		count += ft_print_unsigned_decimal(va_arg(arg, unsigned int));
	else if (specifier == 'x')
		count += ft_print_hexadecimal(va_arg(arg, unsigned int), specifier);
	else if (specifier == 'X')
		count += ft_print_hexadecimal(va_arg(arg, unsigned int), specifier);
	else if (specifier == '%')
		count += ft_print_char('%');
	else
		count += ft_print_char(specifier);
	return (count);
}
