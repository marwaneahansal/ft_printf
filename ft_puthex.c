/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:25:43 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/30 11:47:15 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n)
{
	char	*hex;
	int		char_count;

	hex = "0123456789abcdef";
	char_count = 0;
	if (n < 16)
	{
		ft_putchar(hex[n]);
		char_count++;
		printf(" putch ==> %d\n", char_count);
	}
	else
	{
		char_count += ft_puthex(n / 16);
		printf(" puthex ==> %d\n", char_count);
		ft_putchar(hex[n % 16]);
	}
	return (char_count);
}
