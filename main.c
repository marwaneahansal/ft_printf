/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:31:01 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/31 09:03:13 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
int	main(void)
{
	// int x = 0;
	// void *ptr = "hello";
	// int x = ft_printf("%p\n", ptr);
	// int y = printf("%p\n", ptr);
	int x = ft_printf("%k -- %p \n", (void *) LONG_MIN, (void *) LONG_MAX);
	int y = printf("%k -- %p \n", (void *) LONG_MIN, (void *) LONG_MAX);

	// int y = printf("%p -- %p \n", (void *) ULONG_MAX, (void *) -ULONG_MAX);
	printf("%d -- %d\n", x, y);

	printf("long_min %lu", LONG_MIN);
	return (0);
}
