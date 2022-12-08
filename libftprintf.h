/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:01:23 by ml                #+#    #+#             */
/*   Updated: 2022/12/08 13:08:56 by mvautrot         ###   ########.fr       */
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
int ft_convert_arg(const char *str_arg, va_list ptr, int i);
void    ft_putchar(char c);
void    ft_putstr (char *s);
void    ft_putnbr(int n);
void    ft_unsign_nb(unsigned int nb);
int ft_hexa_min(unsigned int nb);
int ft_hexa_max(unsigned int nb);


#endif