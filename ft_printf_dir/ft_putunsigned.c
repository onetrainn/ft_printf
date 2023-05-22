/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:22:35 by lgrossi           #+#    #+#             */
/*   Updated: 2023/05/22 18:22:40 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int c)
{
	int	x;

	x = 0;
	if (c > 9)
		x += ft_putunsigned(c / 10);
	x += ft_putchar_printf(c % 10 + 48);
	return (x);
}
