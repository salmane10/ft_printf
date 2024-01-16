/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:03:07 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 17:05:15 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr(char *s)
{
    if (!s)
        s = "(null)";
    while (*s)
    {
        ft_putchar(*s);
        s++;
    }
}