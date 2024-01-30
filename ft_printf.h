/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:27:44 by slouham           #+#    #+#             */
/*   Updated: 2024/01/30 15:48:27 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
# define	FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h> 

int 	ft_printf(const char *str, ...);
int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_putnbr(int n);
int     ft_put_unsigned(unsigned int i);
int     ft_hex_up(int nb);
int     ft_hex_down(int nb);
int     ft_putmem(void *p);

#endif
