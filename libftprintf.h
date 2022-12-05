/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml <ml@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:01:23 by ml                #+#    #+#             */
/*   Updated: 2022/12/02 17:55:12 by ml               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF
# define LIBFTPRINTF

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

void    va_start(va_list arg_ptr,prev_param);

type    va_arg(va_list arg_ptr,type);

void    va_copy(va_list dest,va_list src);

void    va_end(va_list arg_ptr,);

int ft_printf(const char *, ...);

#endif