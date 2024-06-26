/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:42:47 by etien             #+#    #+#             */
/*   Updated: 2024/06/26 18:18:47 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_string(va_list ap)
{
	int		count;
	char	*str;

	count = 0;
	str = va_arg(ap, char *);
	if (!str)
	{
		count = write(1, "(null)", 6);
		return (count);
	}
	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}
