/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:00:33 by mvautrot          #+#    #+#             */
/*   Updated: 2022/12/09 14:47:26 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_hexa_max(unsigned int nb)
{
    char    *base;
    int len;

    len = 0;
    base = "0123456789ABCDEF";
    if (nb >= 16)
    {
        len+=ft_hexa_min(nb / 16);
        len+=ft_putchar(base[nb % 16]);
    }
    else 
        len+=ft_putchar(base[nb]);
    return (len);
}