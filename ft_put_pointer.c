/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:14:26 by mahansal          #+#    #+#             */
/*   Updated: 2022/11/02 02:10:13 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pointer(unsigned long ptr, int *char_count, int first_call)
{
	unsigned long	n;
	char			*hex;

	hex = "0123456789abcdef";
	n = ptr;
	if (first_call)
		ft_putstr("0x", char_count);
	if (n < 16)
	{
		ft_putchar(hex[n], char_count);
	}
	else
	{
		ft_put_pointer(n / 16, char_count, 0);
		ft_putchar(hex[n % 16], char_count);
	}
}
