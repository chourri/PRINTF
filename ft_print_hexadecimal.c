/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:01:02 by chourri           #+#    #+#             */
/*   Updated: 2023/12/24 16:53:13 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(unsigned int n, char specifier)
{
	char	*symbols;
	int		count;

	count = 0;
	if (specifier == 'x')
		symbols = "0123456789abcdef";
	else
		symbols = "0123456789ABCDEF";
	if (n == 0)
		return (ft_print_char('0'));
	if (n < 16)
		count += ft_print_char(symbols[n]);
	else
	{
		count += ft_print_hexadecimal(n / 16, specifier);
		count += ft_print_hexadecimal(n % 16, specifier);
	}
	return (count);
}
