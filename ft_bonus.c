/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:02:42 by yel-mota          #+#    #+#             */
/*   Updated: 2024/12/21 11:00:56 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_bonus_2(int nbr, char c)
{
	if (nbr > 0)
		return (ft_putchar(c) + ft_nbr(nbr));
	else
		return (ft_nbr(nbr));
}

int	ft_bonus_1(const char *str, va_list one, int *i)
{
	int	j;

	if (str[*i] == '#' && (str[*i + 1] == 'X' || str[*i + 1] == 'x'))
	{
		(*i)++;
		j = ft_putstr("0x");
		if (str[*i] == 'x')
			j += ft_putnbr_base(va_arg(one, unsigned long), "0123456789abcdef");
		else if (str[*i] == 'X')
			j += ft_putnbr_base(va_arg(one, unsigned long), "0123456789ABCDEF");
		return (j);
	}
	if (str[*i] == ' ' && (str[*i + 1] == 'i' || str[*i + 1] == 'd'))
		return ((*i)++, ft_bonus_2(va_arg(one, int), ' '));
	if (str[*i] == '+' && (str[*i + 1] == 'i' || str[*i + 1] == 'd'))
		return ((*i)++, ft_bonus_2(va_arg(one, int), '+'));
	return (-1);
}
