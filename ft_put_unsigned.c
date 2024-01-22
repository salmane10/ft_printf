/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:26:35 by slouham           #+#    #+#             */
/*   Updated: 2024/01/22 21:31:21 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_put_unsigned(unsigned int i)
{
    int count;

    count = 0;
    if (i < 10)
        count += ft_putchar(i + '0');
    else
    {
        count += ft_put_unsigned(i / 10);
        count += ft_put_unsigned(i % 10);
    }
    return (count);
}