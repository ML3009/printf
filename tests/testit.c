int testit(int i, ...)
{
    va_list argptr;
    va_start(argptr, i);

    if (i == 0)
    {
        /*affiche un seul caractere*/
        char    o = va_arg(argpt, char);
        printf("%c\n", )
    }
   
    else if (i == 1)
    {
        /*affiche un chaine de caractere*/
        char    *s = va_arg(argptr, char *);
        printf("%s\n", s);
    }
    
    else if (i == 2)
    {
        /*l argument de pointeur void * doit etre affiche en hexadecimal*/
        void    *p = va_arg(argptr, void *);
        printf("%p\n", p);
    }
    else if (i == 3)
    {
        /*affiche un nombre decimal base 10*/
        int n = va_arg(argptr, int);
        printf("%d\n", n);
    }
    else if (i== 4)
    {
        /*affiche un entier en base 10*/
        printf ("%i\n");
    }
    else if (i == 5)
    {
        /*affiche un nombre decimal non signe base 10*/
        unsigned int = va_arg(argptr, unsigned int);
        printf("%u\n");
    }
     else if (i == 6)
    {
        /*affiche un nombre hexadecimal base 16 avec des lettres minuscules*/
        printf("%x\n");
    }
      else if (i == 7)
    {
        /*affiche un nombre hexadecimal base 16 avec des lettres majuscules*/
        printf("%X\n");
    }
    else if (i== 8)
    {
        /*affiche un signe pourcentage*/
        printf ("%%\n");
    }

    
    va_end (argptr);
}

int main (void)
{
    testit(0, 'c');
    testit(1, "salut");
    testit(2,);
    testit(3, 5);
    testit(4,);
    testit(5,);
    testit(6,);
    testit(7,);
    testit(8,);
    return(0);
}