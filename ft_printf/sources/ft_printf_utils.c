/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogrossi <lorenzogrossi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:57:37 by lorenzogros       #+#    #+#             */
/*   Updated: 2023/05/19 15:41:05 by lorenzogros      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	get_count(int n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;

	i = get_count(n) - 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	s = (char *)malloc(i + 1);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[i] = 0;
	i--;
	while (n != 0)
	{
		s[i--] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}
int	ft_write_format(char c, va list)
{
	size_t	count;//		ufpxXoeEgG
	char	*s;
	
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(list, char), 1);
		return (1);
	}
	else if (c == 's')
	{
		ft_putstr_fd((s = va_arg(list, char *)), 1);
		return (count = ft_strlen(s));
	}
	else if (c == 'd' || c == 'i')
	{
		s = ft_itoa(va_arg(list, int));
		ft_putstr_fd(s, 1);
		return (count = ft_strlen(s));
	}
	else if (c == 'p')
	{
		s = 
	}
	else if (c == 'f')
	{
		s = 
	}
	else if (c == 'x' || c == 'X')
	{
		
	}
	else if (c == 'o')
	{
		
	}	
}