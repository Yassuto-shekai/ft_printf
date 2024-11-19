/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:43:25 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/18 14:52:59 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	cont;

	if (str == NULL)
		return (-1);
	va_list(one);
	va_start(one, str);
	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			cont += ft_putone(one, str[i]);
		}
		else
			cont += ft_putchar(str[i]);
		i++;
	}
	va_end(one);
	return (cont);
}
