/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:43:25 by yel-mota          #+#    #+#             */
/*   Updated: 2024/12/21 10:50:13 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	cont;
	int	j;

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
			j = ft_putone(one, str, &i);
			if ((str[i] == '%' && str[i + 1] == '\0') || j == -1)
				return (-1);
			cont += j;
		}
		else
			cont += ft_putchar(str[i]);
		i++;
	}
	va_end(one);
	return (cont);
}
