/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:25:46 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/31 08:49:41 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		index;
	int		char_count;

	index = 0;
	char_count = 0;
	va_start(ap, str);
	while (str[index])
	{
		if (str[index] == '%' && str[index + 1] && str[index + 1] == 'c')
		{
			ft_putchar(va_arg(ap, int), &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 's')
		{
			ft_putstr(va_arg(ap, char *), &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == '%')
		{
			ft_putchar('%', &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'd')
		{
			ft_putnbr(va_arg(ap, int), &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'i')
		{
			ft_putnbr(va_arg(ap, int), &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'u')
		{
			ft_putunbr(va_arg(ap, unsigned int), &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'x')
		{
			ft_puthex(va_arg(ap, unsigned int), &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'X')
		{
			ft_puthex_maj(va_arg(ap, unsigned int), &char_count);
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'p')
		{
			ft_put_pointer((unsigned long) va_arg(ap, void *), &char_count, 1);
			index++;
		}
		else
			ft_putchar(str[index], &char_count);
		index++;
	}
	va_end(ap);
	return (char_count);
}
