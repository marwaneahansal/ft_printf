/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:31:01 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/30 07:49:44 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int x = ft_printf("hello %i %i\n", -10, 0xa);
	int y = printf("hello %i %i\n", -10, 0xa);
	printf("%d -- %d\n", x, y);
	return (0);
}
