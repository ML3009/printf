/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:12:45 by mvautrot          #+#    #+#             */
/*   Updated: 2022/12/09 14:55:15 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putaddr(unsigned long nb)
{
    char    *base;
    int     len_nbr;
    int len;
    
    len_nbr = 0;
    len = 1;
    if (len)
        len_nbr+=ft_putstr("0x");
    base = "0123456789abcdef";
    if (nb >= 16)
    {
        len_nbr += ft_hexa_min(nb / 16);
        len_nbr += ft_putchar(base [nb % 16]);
    }
    else 
        len_nbr += ft_putchar(base[nb]);
    return (len_nbr);
}
