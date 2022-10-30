/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 07:30:24 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/30 11:35:35 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	char_count;

	char_count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		char_count++;
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		char_count += ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
		char_count++;
	}
	return (char_count);
}
