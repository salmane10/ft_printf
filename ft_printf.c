/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:35:13 by slouham           #+#    #+#             */
/*   Updated: 2024/01/23 15:15:22 by slouham          ###   ########.fr       */
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

    if (!str || !str[0])
        return (-1);
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
/*
int	main(void)
{
	int count = ft_printf("hello%khffff%,");
	printf("\n");
	ft_printf("%d", count);
	printf("\n");
    	int i = printf("hello%khffff%,");
	printf("\n");
	printf("%d", i);
	return (0);
}
*/

/* now i have to recode printf function so ...
 * first of all i have to know what printf print if i give her %d %c %i %s %p %x %X %% %u .
 * ok now printf return an int which is have the number of characters printed
 * and i have to know what is this : va_list : va_start: va_arg: va_end:
 * 
 * variadic function: (it's not english never mind ->hiya wa7d l function li kataccepti variable number of argument)
 *%c : print char but how can i count the character (ps : write function katreturni int)
 %s : print string and count the characters printed
 %i&d : ? (i think the different between i and d is in scanf function)
 %p: ?
 %x: ? hexadicemal lower
 %X: ? hexadicemal upper
 %u: ? simply write an unsigned char but wait , if i give it a negative number what will print??
 %%: ? simply write a single % haha easy
 and done ;) and i will be good hh
 */

/*int main()
{
    ft_printf("hello mr %c your name is %s and %r %p your age is %d", 's', "salmane", 2255);
    return (0);
}


/*#include "ft_printf.h"

static	int		format()
{
	int	i;
	int	result;

	i = 0;
	if (format[i] == 'c')
		result += (va_arg(list, int));
	//else if (format[] == 'd' || format[] == 'i')
	//	ft_putnbr()
	//else if (format[] == 's')
	//	ft_putstr()
}

int		ft_printf(const char *str, ...)
{
	int		i;
	int		r;
	va_list args;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				r = va_arg(args, int);
				ft_putchar(r);
			//format(args, (char *)str + i);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return ((r);
}*/
