/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:43:13 by etien             #+#    #+#             */
/*   Updated: 2024/06/27 10:50:22 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// long long can hold all values of int so no typecasting is necessary.
// Prints a decimal (base 10) number / an integer in base 10.
int	ft_print_int(va_list ap)
{
	long long	n;
	int			sign;

	sign = 0;
	n = va_arg(ap, int);
	if (n < 0)
	{
		sign += write(1, "-", 1);
		n *= -1;
	}
	return (ft_putnbr_base(n, DEC) + sign);
}
