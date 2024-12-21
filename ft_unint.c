/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:03:17 by yel-mota          #+#    #+#             */
/*   Updated: 2024/12/21 10:22:08 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putunint(unsigned long long n)
{
	if (n > 9)
		ft_putunint(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_unint(unsigned long long n)
{
	ft_putunint(n);
	return (ft_countnbr(n));
}
