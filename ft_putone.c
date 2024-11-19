/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:16:52 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/18 17:28:17 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_hexa(va_list one, char c)
{
	int	i;

	i = 0;
	if (c == 'x')
	{
		i = ft_putnbr_base(va_arg(one, unsigned long long), "0123456789abcdef");
		return (i);
	}
	if (c == 'X')
	{
		i = ft_putnbr_base(va_arg(one, unsigned long long), "0123456789ABCDEF");
		return (i);
	}
	if (c == 'p')
	{
		i = ft_putaddress(va_arg(one, void *));
		return (i);
	}
	return (i);
}

int	ft_putone(va_list one, char c)
{
	int	i;

	if (c == 's')
		return (ft_putstr(va_arg(one, char *)));
	if (c == 'c')
		return (ft_putchar(va_arg(one, int)));
	if (c == 'd' || c == 'i')
		return (ft_nbr(va_arg(one, int)));
	if (c == 'u')
		return (ft_unint(va_arg(one, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'x' || c == 'X' || c == 'p')
		return (ft_hexa(one, c));
	else
	{
		i = ft_putchar('%');
		i += ft_putchar(c);
		return (i);
	}
}
