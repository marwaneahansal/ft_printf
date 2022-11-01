/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:25:43 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/31 04:37:37 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int *char_count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar(hex[n], char_count);
	}
	else
	{
		ft_puthex(n / 16, char_count);
		ft_putchar(hex[n % 16], char_count);
	}
}
