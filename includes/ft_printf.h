/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgelbart <mgelbart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:20:37 by mgelbart          #+#    #+#             */
/*   Updated: 2021/12/13 15:04:29 by mgelbart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...);
void	ft_putchar(int c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int num, int *count);
void	ft_putunbr(unsigned int num, int *count);
char	*ft_strrev(char *str);
void	ft_smallhex(unsigned long num, int *count);
void	ft_bighex(unsigned int num, int *count);



#endif
