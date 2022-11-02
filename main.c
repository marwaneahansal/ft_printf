/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:31:01 by mahansal          #+#    #+#             */
/*   Updated: 2022/11/02 02:06:59 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
int	main(void)
{
	// int x = 0;
	// void *ptr = "hello";
	int x = ft_printf("%s");
	printf("\n");
	int y = printf("%s");
	printf("\n");

	printf("%d -- %d\n", x, y);
	return (0);
}
