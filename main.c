/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:31:01 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/30 11:48:53 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	// int x = 0;
	int x = ft_printf("%x\n", 0);
	int y = printf("%x\n", 0);
	printf("%d -- %d\n", x, y);

	ft_puthex(0);

	return (0);
}
