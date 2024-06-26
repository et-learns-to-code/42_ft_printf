/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:02:32 by etien             #+#    #+#             */
/*   Updated: 2024/06/26 15:55:59 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// long long data type is guaranteed to be at least 8 bytes (64 bits)
// on all platforms supported by C99 and later standards.
// unsigned long long can hold any value that size_t can represent.
int	ft_putnbr_base(unsigned long long n, const char *base_str)
{
	int					count;
	unsigned long long	base;

	count = 0;
	base = ft_strlen(base_str);
	if (n >= base)
	{
		count += ft_putnbr_base((n / base), base_str);
	}
	count += write(1, base_str + (n % base), 1);
	return (count);
}

/*
int main()
{
	int count;

	count = ft_putnbr_base(987654321, "0123456789ABCDEF");
	printf("\n%d\n", count);
	return (0);
}
*/
