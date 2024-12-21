/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:38:18 by yel-mota          #+#    #+#             */
/*   Updated: 2024/12/21 10:54:12 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_adress(unsigned long nbr, char *base)
{
	int				i;
	unsigned int	basel;

	i = 0;
	basel = ft_strlen(base);
	if (nbr < basel)
	{
		i += ft_putchar(base[nbr]);
	}
	else
	{
		i += ft_putnbr_base(nbr / basel, base);
		i += ft_putnbr_base(nbr % basel, base);
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
