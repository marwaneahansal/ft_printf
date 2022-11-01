/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_maj.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 04:39:21 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/31 04:41:37 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_maj(unsigned int n, int *char_count)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n < 16)
	{
		ft_putchar(hex[n], char_count);
	}
	else
	{
		ft_puthex_maj(n / 16, char_count);
		ft_putchar(hex[n % 16], char_count);
	}
}