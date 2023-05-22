/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:15:52 by lorenzogros       #+#    #+#             */
/*   Updated: 2023/05/22 18:53:54 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_format(char c, va_list list)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_printf(va_arg(list, int ));
	else if (c == 's')
		count = ft_putstr_printf((va_arg(list, char *)));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr_printf(va_arg(list, int));
	else if (c == 'p')
		count += ft_voidhex(va_arg(list, unsigned long), "0123456789abcdef");
	else if (c == 'u')
		count = ft_putnbr_printf(va_arg (list, unsigned int));
	else if (c == 'x')
		return (count = ft_hexadecimal(va_arg(list, unsigned int),"0123456789abcdef"));
	else if (c == 'X')
		count = ft_hexadecimal(va_arg(list, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		count = ft_putchar_printf('%');
		return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		x;
	va_list list;
	char	c;

	i = 0;
	va_start (list, format);
	while (format[i])
	{
		while (format[i] != '%')
			write (1, &format[i++], 1);
		if (format[i] == '%' && format[i])
		{
			c = format[i + 1];
			x = ft_write_format(c, list);
			i += 2;
		}
	}
	va_end(list);
	return (i + x);
}
