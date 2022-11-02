/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:23:29 by mahansal          #+#    #+#             */
/*   Updated: 2022/11/02 02:10:02 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	handle_conversions(va_list ap, char c, int *char_count);
void	ft_putchar(char c, int *char_count);
void	ft_putstr(char *str, int *char_count);
void	ft_putnbr(int n, int *char_count);
void	ft_putunbr(unsigned int n, int *char_count);
void	ft_puthex(unsigned int n, int is_upper, int *char_count);
void	ft_put_pointer(unsigned long n, int *char_count, int first_call);

#endif