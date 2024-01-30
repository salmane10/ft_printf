/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:32:44 by slouham           #+#    #+#             */
/*   Updated: 2024/01/30 13:35:34 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_down(int nb)
{
    int count;
    char *base;

    count = 0;
    base = "0123456789abcdef";
    if (nb >= 16)
        count += ft_hex_down(nb / 16);
    count +=ft_putchar(base[nb % 16]);
    return (count);
}