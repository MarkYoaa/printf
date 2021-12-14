/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:21:16 by mgelbart          #+#    #+#             */
/*   Updated: 2021/12/14 15:40:05 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(int c, int *count)
{
	write(1, &c, 1);
	*count = *count + 1;
}

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
}

void	ft_putnbr(int num, int *count)
{
	char	tmp;

	if (num == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (num < 0)
	{
		ft_putchar('-', count);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr(num / 10, count);
	tmp = num % 10 + '0';
	write(1, &tmp, 1);
	*count = *count + 1;
}

void	ft_putunbr(unsigned int num, int *count)
{
	char	tmp;

	if (num >= 10)
		ft_putnbr(num / 10, count);
	tmp = num % 10 + '0';
	write(1, &tmp, 1);
	*count = *count + 1;
}
