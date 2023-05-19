/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogrossi <lorenzogrossi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:15:52 by lorenzogros       #+#    #+#             */
/*   Updated: 2023/05/19 15:39:11 by lorenzogros      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set = "diufcspxXoeEgG";

// int	get_count(char	*format)
// {
// 	int	i;
// 	int count;

// 	i = 0;
// 	count = 0;
// 	while (format[i])
// 	{
// 		while (format[i] != '%')
// 			i++;
// 		if (format[i] == '%' && ft_strchr(set, format[i + 1]))
// 		{
// 			count++;
// 			i += 2;		
// 		}
// 		else
// 			i++;
// 	}
// 	return (count);
// }
int	ft_printf(char *format, ...)
{
	int		i;
	va_list list;
	char	c;
	
	i = 0;
	va_start (list, format);
	while (format[i])
	{
		while (format[i] != '%')
			write (1, &format[i++], 1);
		if (format[i] == '%' && strchr(set, format[i + 1]))
		{
			c = format[i + 1];
			ft_write_format(c, list);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			write (1, &format[i], 1);
			i += 2;
		}
	}
	return (i);
}

void	ft_write_format(char c, va_list list)
{
	char	s;
	int		n;
	
	if (c == 'c')
	{
		s = va_arg(list, char);
		n = write(1, &s, 1);
	}
	else if (c == 's')
		n = ft_put_string(va_arg(list, char *));
	else if (c == 'd')
		n = ft_putnumber(va_arg(list, int));
}