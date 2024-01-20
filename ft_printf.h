/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:27:44 by slouham           #+#    #+#             */
/*   Updated: 2024/01/20 16:33:56 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
# define	FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int 	ft_printf(const char *str, ...);
int     ft_putchar(int c);
int     ft_putstr(char *s);
int     ft_putnbr(int n);

#endif
