/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:22:10 by lgrossi           #+#    #+#             */
/*   Updated: 2023/05/29 17:52:25 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex(unsigned long n, char *str)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += hex(n / 16, str);
	i += ft_char(str[n % 16]);
	return (i);
}

int	ft_voidhex(unsigned long n, char *str)
{
	int	x;

	x = 2;
	ft_char('0');
	ft_char('x');
	x += hex(n, str);
	return (x);
}
