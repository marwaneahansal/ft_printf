/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 06:36:19 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/30 06:47:27 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
	return (index);
}
