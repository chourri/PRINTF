/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 14:08:45 by chourri           #+#    #+#             */
/*   Updated: 2023/12/26 15:40:01 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_pointer(unsigned long long n)
{
	char	*symbols;
	int		count;

	symbols = "0123456789abcdef";
	count = 0;
	if (n == 0)
	{
		count += ft_print_char('0');
		return (count);
	}
	if (n < 16)
		count += ft_print_char(symbols[n]);
	else if (n >= 16)
	{
		count += convert_pointer(n / 16);
		count += convert_pointer(n % 16);
	}
	return (count);
}

int	ft_print_pointer(unsigned long long n)
{
	int	count;

	count = 0;
	count += ft_print_str("0x");
	count += convert_pointer(n);
	return (count);
}
