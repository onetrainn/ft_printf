/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:15:52 by lorenzogros       #+#    #+#             */
/*   Updated: 2023/05/29 19:17:11 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_format(char c, va_list list)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_char(va_arg(list, int));
	else if (c == 's')
		count += ft_string((va_arg(list, char *)));
	else if (c == 'd' || c == 'i')
		count += ft_number(va_arg(list, int));
	else if (c == 'p')
		count += ft_voidhex(va_arg(list, unsigned long), "0123456789abcdef");
	else if (c == 'u')
		count += ft_unsigned(va_arg (list, unsigned int));
	else if (c == 'x')
		(count += ft_hexa(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		count += ft_hexa(va_arg(list, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		count += ft_char('%');
	else
		return (0);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		x;
	va_list	list;

	x = 0;
	i = 0;
	if (!format)
		return (0);
	va_start (list, format);
	while (format[i])
	{
		if (format [i] != '%')
			x += ft_char(format[i]);
		else
		{
			i++;
			x += ft_write_format(format[i], list);
		}
		i++;
	}
	va_end(list);
	return (x);
}
