/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 07:30:24 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/31 04:34:44 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *char_count)
{
	if (n < 0)
	{
		ft_putchar('-', char_count);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0', char_count);
	}
	else
	{
		ft_putnbr(n / 10, char_count);
		ft_putchar(n % 10 + '0', char_count);
	}
}
