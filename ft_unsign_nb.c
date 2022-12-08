/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsign_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:06:17 by mvautrot          #+#    #+#             */
/*   Updated: 2022/12/08 13:08:13 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_unsign_nb(unsigned int nb)
{
    long long int i;
    
    i = nb;
    if (i > 9)
    {
        ft_putnbr(i / 10);
        ft_putchar(i % 10 + '0');
    }
    else
        ft_putchar(i + '0');
}
