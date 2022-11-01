/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 06:36:19 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/31 04:14:11 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *char_count)
{
	int	index;

	index = 0;
	if (!str)
		ft_putstr("(null)", char_count);
	while (str && str[index])
	{
		ft_putchar(str[index], char_count);
		index++;
	}
}
