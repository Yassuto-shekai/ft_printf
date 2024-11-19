/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:37:01 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/18 17:12:48 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int				i;
	unsigned int	basel;
	unsigned int	num;

	i = 0;
	num = nbr;
	basel = ft_strlen(base);
	if (num < basel)
	{
		i += ft_putchar(base[num]);
	}
	else
	{
		i += ft_putnbr_base(num / basel, base);
		i += ft_putnbr_base(num % basel, base);
	}
	return (i);
}
