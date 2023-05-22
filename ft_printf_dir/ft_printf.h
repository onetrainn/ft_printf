/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:28:23 by lorenzogros       #+#    #+#             */
/*   Updated: 2023/05/22 18:49:14 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_hexadecimal(unsigned int n, char *str);
int	ft_write_format(char c, va_list list);
int	ft_putunsigned(unsigned int c);
int	ft_putchar_printf(char c);
int	ft_putnbr_printf(int n);
int	ft_putstr_printf(char *s);
int	hex(unsigned long n, char *str);
int	ft_voidhex(unsigned long n, char *str);
#endif
