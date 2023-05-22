/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:18:57 by lgrossi           #+#    #+#             */
/*   Updated: 2023/05/22 18:42:40 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int n, char *str)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_hexadecimal(n / 16, str);
	i += ft_putchar_printf(str[n % 16]);
	return (i);
}
