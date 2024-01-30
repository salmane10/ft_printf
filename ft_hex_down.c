/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:32:44 by slouham           #+#    #+#             */
/*   Updated: 2024/01/30 17:50:30 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_down(unsigned int nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb < 16)
		count += ft_putchar(base[nb]);
	else
	{
		count += ft_hex_down(nb / 16);
		count += ft_putchar(base[nb % 16]);
	}
	return (count);
}
