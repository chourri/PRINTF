/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:27:49 by chourri           #+#    #+#             */
/*   Updated: 2023/12/26 15:33:28 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_decimal(unsigned int n)
{
	if (n == 0)
		return (ft_print_char('0'));
	if (n < 10)
		return (ft_print_char(n + '0'));
	return (ft_print_unsigned_decimal(n / 10) + ft_print_char((n % 10) + '0'));
}
