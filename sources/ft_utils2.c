/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:51:56 by mgelbart          #+#    #+#             */
/*   Updated: 2021/12/14 15:45:53 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_smallhex(unsigned long num, int *count)
{
	char	*s;

	s = "0123456789abcdef";
	if (num < 16)
		ft_putchar(s[num], count);
	else
	{
		ft_smallhex(num / 16, count);
		ft_smallhex(num % 16, count);
	}
}

void	ft_bighex(unsigned int num, int *count)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (num < 16)
		ft_putchar(s[num], count);
	else
	{
		ft_bighex(num / 16, count);
		ft_bighex(num % 16, count);
	}
}
