/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:06:58 by yel-mota          #+#    #+#             */
/*   Updated: 2024/12/14 16:23:46 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nbr(int n)
{
	unsigned long	i;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		ft_putchar('-');
		i = n * -1;
		return (ft_putnbr_base(i, "0123456789") + 1);
	}
	i = (unsigned long)n;
	return (ft_putnbr_base(n, "0123456789"));
}
