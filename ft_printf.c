/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:11:34 by mvautrot          #+#    #+#             */
/*   Updated: 2022/12/09 14:58:34 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *str_arg, ...)
{
    int i;
    int len;
    va_list ptr; 
    
    i = 0;
    len = 0;
    va_start(ptr, str_arg);
    while (str_arg[i])
    {
        if(str_arg[i] == '%')
        {
            len+=ft_convert_arg(str_arg[i + 1], ptr); //
            i++;
        }
        else
            len+=ft_putchar(str_arg[i + 1]);     
        i++;
    }
    
    va_end(ptr);
    return (len);
}

int ft_convert_arg(const char str_arg, va_list ptr)
{
    int len;
    len = 0;
   
        if (str_arg == 'c')
            len+=ft_putchar((va_arg(ptr, int))); 
        if (str_arg == 's')
            len+=ft_putstr(va_arg(ptr, char *));
        if (str_arg == 'p')
            len+=ft_putaddr(va_arg(ptr, unsigned long));
        if (str_arg == 'd' || str_arg == 'i')
            len+=ft_putnbr(va_arg(ptr, int));
        if (str_arg == 'u')
            len+=ft_unsign_nb(va_arg(ptr, unsigned int));
        if (str_arg == 'x')
            len+=ft_hexa_min(va_arg(ptr, unsigned int));
        if (str_arg == 'X')
            len+=ft_hexa_max(va_arg(ptr, unsigned int));
return (len);

}

/*int main (void)
{
    printf ("----------TEST c------------\n");
    
   
    if (printf ("%c\n", 'a') == ft_printf("%c\n", 'a'))
        printf("\nok\n");
    else
        printf("no\n");

    printf ("----------TEST s------------\n");
   
    
    if (printf ("%s\n", "salut") == ft_printf("%s\n", "salut"))
        printf("\nok\n");
    else
        printf("no\n");

    printf ("----------TEST P------------\n");

     if (printf ("%p\n", "salut\n") == ft_printf("%p\n", "salut\n"))
        printf("\nok\n");
    else
        printf("no\n");   

    printf ("----------TEST i------------\n");

    if (printf ("%i\n", 3) == ft_printf("%i\n", 3))
        printf("\nok\n");
    else
        printf("no\n");

    printf ("----------TEST d------------\n");

    if (printf ("%d\n", 45) == ft_printf("%d\n", 45))
        printf("\nok\n");
    else
        printf("no\n");

    printf ("----------TEST u------------\n");

    if (printf ("%u\n", 495) == ft_printf("%u\n", 495))
        printf("\nok\n");
    else
        printf("no\n");
    
    printf ("----------TEST x------------\n");

    if (printf ("%x\n", 49508974) == ft_printf("%x\n", 49508974))
        printf("\nok\n");
    else
        printf("no\n");

    printf ("----------TEST X------------\n");

    if (printf ("%X\n", 49508974) == ft_printf("%X\n", 49508974))
        printf("\nok\n");
    else
        printf("no\n");


    
}*/