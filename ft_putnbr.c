/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:11:37 by slouham           #+#    #+#             */
/*   Updated: 2024/01/20 18:34:52 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    int count;

    count = 0;
    if (n == -2147483648)
        count = ft_putstr("-2147483648");
    else if (n < 0)
    {
        count = ft_putchar('-');
        count = n *= -1;
    }
    else if (n >= 0 && n <= 9)
        count = ft_putchar(n + '0');    
    else
    {
        count = ft_putnbr(n / 10);
        count = ft_putnbr(n % 10);
    }
    return (count);
}