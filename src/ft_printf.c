/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:20:29 by etien             #+#    #+#             */
/*   Updated: 2024/06/26 16:58:55 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_specifier(char c, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
		return (0);
	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
			count += ft_specifier(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

static int	ft_specifier(char c, va_list ap)
{
	if (c == 'c')
		return ft_print_char(ap);
	if (c == 's')
		return ft_print_string(ap);
	if (c == 'p')
		return ft_print_pointer(ap);
	if (c == 'd' || c == 'i')
		return ft_print_int(ap);
	if (c == 'u')
		return ft_print_unsigned(ap);
	if (c == 'x')
		return ft_print_lowerhex(ap);
	if (c == 'X')
		return ft_print_upperhex(ap);
	else if (c == '%')
		return ft_print_percent(ap);
	return (write(1, &c, 1));
}


// void main()
// {
// 	//ft_printf()
// 	printf("Hello, %s", "world");
// }
