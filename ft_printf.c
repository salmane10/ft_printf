/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:35:13 by slouham           #+#    #+#             */
/*   Updated: 2024/01/30 15:26:54 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check(char c, va_list args)
{
	int count;

	count = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_hex_down(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_hex_up(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_putmem(va_arg(args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		count += ft_putchar('%');
	count += ft_putchar(c);
	return (count);
}

int		ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list args;

	i = 0;
	count = 0;

	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			count += check(str[++i], args);
        else 
			count += ft_putchar(str[i]);  
        i++;
	}
	va_end(args);
	return (count);
}

/* i have to recode printf function so ...
 * first of all i have to know what printf print if i give her %d %c %i %s %p %x %X %% %u .
 * printf return an int which is have the number of characters printed
 * i have to know what is this : va_list : va_start: va_arg: va_end:
 * 
 * variadic function: (it's not english never mind ->hiya wa7d l function li kataccepti variable number of argument)
 *%c : print char but how can i count the character (ps : write function katreturni int , ok had l int fih how many charagter printed hh)
  %s : print string and count the characters printed
  %i&d : ? (i think the different between i and d is in scanf function)
  %p: ? print memory address in hexadecimal / should start with 0x
  %x: ? hexadicemal lower (base 16)
  %X: ? hexadicemal upper (base 16)
  %u: ? write an unsigned char but wait , if i give it a negative number what will print??
  %%: ? simply write a single % 
  done
 */

