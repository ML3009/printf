/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:12:36 by mvautrot          #+#    #+#             */
/*   Updated: 2022/12/08 10:15:28 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_putnbr(int n)
{
    long long int i;

    i = n;
    if (i = -2147483648)
        ft_putstr(-2147483648);
    else if (i < 0)
    {
        ft_putchar('-');
        ft_putnbr(-i);
    }
    else if (i > 9)
    {
        ft_putnbr(i / 10);
        ft_putchar(i % 10 + '0');
    }
    else
    ft_putchar(i + '0');
}