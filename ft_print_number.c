/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:59:40 by chourri           #+#    #+#             */
/*   Updated: 2023/12/24 16:29:44 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int	count;

	count = 0 ;
	if (n == INT_MIN)
		return (ft_print_str("-2147483648"));
	if (n < 0)
	{
		count = ft_print_char('-');
		return (count + ft_print_number(-n));
	}
	if (n >= 0 && n <= 9)
		return (ft_print_char(n + '0'));
	count += ft_print_number(n / 10);
	return (count + ft_print_number(n % 10));
}
