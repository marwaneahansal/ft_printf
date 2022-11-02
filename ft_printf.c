/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:25:46 by mahansal          #+#    #+#             */
/*   Updated: 2022/11/02 02:06:25 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_conversions(va_list ap, char c, int *char_count)
{
	if (c && c == 'c')
		ft_putchar(va_arg(ap, int), char_count);
	else if (c && c == 's')
		ft_putstr(va_arg(ap, char *), char_count);
	else if (c && c == '%')
		ft_putchar('%', char_count);
	else if (c && c == 'd')
		ft_putnbr(va_arg(ap, int), char_count);
	else if (c && c == 'i')
		ft_putnbr(va_arg(ap, int), char_count);
	else if (c && c == 'u')
		ft_putunbr(va_arg(ap, unsigned int), char_count);
	else if (c && c == 'x')
		ft_puthex(va_arg(ap, unsigned int), 0, char_count);
	else if (c && c == 'X')
		ft_puthex(va_arg(ap, unsigned int), 1, char_count);
	else if (c && c == 'p')
		ft_put_pointer((unsigned long) va_arg(ap, void *), char_count, 1);
}

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
		if (str[index] == '%')
		{
			index++;
			handle_conversions(ap, str[index], &char_count);
		}
		else
			ft_putchar(str[index], &char_count);
		index++;
	}
	va_end(ap);
	return (char_count);
}
