/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:23:55 by chourri           #+#    #+#             */
/*   Updated: 2023/12/25 21:16:08 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_print_char(int c);
int		ft_print_str(char *str);
int		print_format(char specifier, va_list arg);
int		ft_print_hexadecimal(unsigned int n, char specifier);
int		ft_print_number(int n);
int		ft_print_pointer(unsigned long long n);
int		ft_print_unsigned_decimal(unsigned int n);
int		ft_printf(const char *format, ...);

#endif
