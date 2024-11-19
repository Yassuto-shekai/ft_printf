/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:38:18 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/18 20:34:39 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_adress(unsigned long nbr, char *base)
{
	unsigned int	basel;
	int				i;
	unsigned long		num;

	i = 0;
	num = nbr;
	basel = ft_strlen(base);
	if (num < basel)
	{
		i += ft_putchar(base[num]);
	}
	else
	{
		i += ft_adress(num / basel, base);
		i += ft_adress(num % basel, base);
	}
	return (i);
}

int	ft_putaddress(void *p)
{
	int	i;

	if (p == 0)
		return (ft_putstr("(nil)"));
	i = 0;
	i += ft_putstr("0x");
	i += ft_adress((unsigned long)p, "0123456789abcdef");
	return (i);
}
