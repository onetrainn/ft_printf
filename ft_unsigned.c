/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:22:35 by lgrossi           #+#    #+#             */
/*   Updated: 2023/05/29 19:09:03 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int c)
{
	int	x;

	x = 0;
	if (c > 9)
	{
		x += ft_unsigned(c / 10);
		c = c % 10;
	}
	x += ft_char(c + 48);
	return (x);
}
