/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:14:42 by etien             #+#    #+#             */
/*   Updated: 2024/06/26 16:32:33 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	ft_print_char(va_list ap);
int	ft_print_int(va_list ap);
int	ft_print_lowerhex(va_list ap);
int	ft_print_percent();
int	ft_print_pointer(va_list ap);
int	ft_print_string(va_list ap);
int	ft_print_unsigned(va_list ap);
int	ft_print_upperhex(va_list ap);
int	ft_putnbr_base(unsigned long long n, const char *base);
size_t	ft_strlen(const char *s);

#endif
