/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:25:46 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/30 11:42:47 by mahansal         ###   ########.fr       */
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
			ft_putchar(va_arg(ap, int));
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 's')
		{
			char_count += ft_putstr(va_arg(ap, char *)) - 1;
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == '%')
		{
			ft_putchar('%');
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'd')
		{
			char_count += ft_putnbr(va_arg(ap, int));
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'i')
		{
			char_count += ft_putnbr(va_arg(ap, int));
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'u')
		{
			char_count += ft_putunbr(va_arg(ap, unsigned int));
			index++;
		}
		else if (str[index] == '%' && str[index + 1] && str[index + 1] == 'x')
		{
			char_count += ft_puthex(va_arg(ap, int));
			index++;
		}
		else
			write(1, &str[index], 1);
		index++;
		char_count++;
	}
	va_end(ap);
	return (char_count);
}
