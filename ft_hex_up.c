/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:13:30 by slouham           #+#    #+#             */
/*   Updated: 2024/01/22 22:34:59 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_up(int nb)
{
    int count;
    char *base;

    count = 0;
    base = "0123456789ABCDEF";
    if (nb >= 16)
        count += ft_hex_up(nb / 16);
    count +=ft_putchar(base[nb % 16]);
    return (count);
}
// lhaj khdem b boolian hta tsowlo kifach // wach write function ila derti liha hk []c kamchi l dak l base hh