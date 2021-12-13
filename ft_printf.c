/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:40:56 by mgelbart          #+#    #+#             */
/*   Updated: 2021/12/13 15:04:22 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_formats(va_list arg, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int), count);
	else if (c == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (c == 'd')
		ft_putnbr(va_arg(arg, int), count);
	else if (c == 'i')
		ft_putnbr(va_arg(arg, int), count);
	else if (c == 'u')
		ft_putunbr(va_arg(arg, unsigned int), count);
	else if (c == '%')
		ft_putchar('%', count);
	else if (c == 'x')
		ft_smallhex(va_arg(arg, unsigned int), count);
	else if (c == 'X')
		ft_bighex(va_arg(arg, unsigned int), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_smallhex(va_arg(arg, unsigned long), count);
	}
}

int	ft_printf(const char *input, ...)
{
	va_list	arg;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(arg, input);
	while (input[i])
	{
		if (input[i] != '%')
			ft_putchar(input[i], &count);
		else
		{
			i++;
			ft_formats(arg, input[i], &count);
		}
		i++;
	}
	va_end(arg);
	return (count);
}
