/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:27:44 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 17:06:00 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
# define	FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>


int 	ft_printf(const char *str, ...);
void    ft_putchar(int c);
void    ft_putstr(char *s);
#endif
