/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:01:23 by ml                #+#    #+#             */
/*   Updated: 2022/12/09 17:32:21 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>

int ft_printf(const char *, ...);
int ft_convert_arg(const char str_arg, va_list ptr);
int    ft_putchar(int c);
int    ft_putstr (char *s);
int    ft_putnbr(int n);
int    ft_unsign_nb(unsigned int nb);
int ft_hexa_min(unsigned int nb);
int ft_hexa_max(unsigned int nb);
int ft_putaddr(uintptr_t nb);
int ft_hexa_ptr(unsigned long long nb);


#endif