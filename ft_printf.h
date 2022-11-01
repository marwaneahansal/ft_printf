/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:23:29 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/31 08:48:53 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

#include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *char_count);
void	ft_putstr(char *str, int *char_count);
void	ft_putnbr(int n, int *char_count);
void	ft_putunbr(unsigned int n, int *char_count);
void	ft_puthex(unsigned int n, int *char_count);
void	ft_puthex_maj(unsigned int n, int *char_count);
void	ft_put_pointer(unsigned long n, int *char_count, int first_call);

#endif