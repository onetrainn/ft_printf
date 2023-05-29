/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrossi <lgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:28:23 by lorenzogros       #+#    #+#             */
/*   Updated: 2023/05/29 19:14:58 by lgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_hexa(unsigned int n, char *str);
int	ft_write_format(char c, va_list list);
int	ft_unsigned(unsigned int c);
int	ft_char(char c);
int	ft_number(int n);
int	ft_string(char *s);
int	hex(unsigned long n, char *str);
int	ft_voidhex(unsigned long n, char *str);
#endif
