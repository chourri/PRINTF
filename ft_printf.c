/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:08:15 by chourri           #+#    #+#             */
/*   Updated: 2023/12/26 15:22:02 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && *format + 1)
		{
			format++;
			count += print_format(*format, arg);
		}
		else
			count += ft_print_char(*format);
		if (*format)
			format++;
	}
	va_end(arg);
	return (count);
}
