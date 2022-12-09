/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:01:23 by ml                #+#    #+#             */
/*   Updated: 2022/12/09 14:55:45 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int ft_convert_arg(const char str_arg, va_list ptr);
int    ft_putchar(int c);
int    ft_putstr (char *s);
int    ft_putnbr(int n);
int    ft_unsign_nb(unsigned int nb);
int ft_hexa_min(unsigned int nb);
int ft_hexa_max(unsigned int nb);
int ft_putaddr(unsigned long nb);


#endif