/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:11:34 by mvautrot          #+#    #+#             */
/*   Updated: 2022/12/08 13:32:07 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*printf renvoie un entier qui constitue un CR d'execution = valeur retournee 
correspond au nombre de caracteres affiches || si la fonction reussim elle renvoie le nombre de 
caractere imprimes, sans compter l octet nul '\0' final dans les chaine
http://manpagesfr.free.fr/man/man3/printf.3.html
https://learn.microsoft.com/fr-fr/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-170*/


/*void    va_start(va_list str_arg,prev_param);
type    va_arg(va_list str_arg,type);
void    va_end(va_list arg_ptr,);*/

int ft_printf(const char *str_arg, ...)
{
    int i;
    int len;
    va_list ptr; //declaring pointer to the argument list
    
    i = 0;
    len = 0;
    va_start(ptr, str_arg)
    while (str_arg[i])
    {
        if(str_arg[i] == '%')
            len = ft_convert_arg(str[i + 1], ptr); //
        else
            len += write(1, &str_arg[i + 1], 1)     //printf what you read   
        i++;
    }
    
    va_end(ptr);
    return (len);
}

int ft_convert_arg(const char *str_arg, va_list ptr)
{
    int len;
    int i;

    len = 0;   
    i = 0;
    while (str_arg[i])
    {
        if (str_arg[i] == 'c')
            len = ft_putchar(va_arg(str_arg, char), len); 
        if (str_arg[i] == 's')
            len = ft_putstr(va_arg(str_arg, char *), len);
        if (str_arg[i] == 'p')
            len = ft_putaddr(va_arg(str_arg, unsigned long), 2);
        if (str_arg[i] == 'd' || str_arg[i] == 'i')
            len = ft_putnbr(va_arg(str_arg, int), len);
        if (str_arg[i] == 'u')
            len = ft_unsign_nb(va_arg(str_arg, unsigned int), len);
        if (str_arg[i] == 'x')
            len = ft_hexa_min(va_arg(str_arg, unsigned int), len);
        if (str_arg[i] == 'X')
            len = ft_hexa_max(va_arg(str_arg, unsigned int), len);
        i++;
    }
    return (len);
}