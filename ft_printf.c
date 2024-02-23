#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    va_list args;
    int input;
    int i;

    i = 0; 
    input = 0;

    va_start (args, s);
    while(s[i] != '\0')
    {
        if (s[i] == '%')
        {
            input += ft_selection(args, s[i+1]);
            i++;
        }
        else
        {
            input += ft_putchar(s[i]);
            i++;
        }   
    }
    va_end(args);
    return (input);
}

int ft_selection(va_list args, char detector)
{
    int input;
    
    input = 0;
    if (detector == 'c')
        input = ft_putchar(va_arg(args, int));
    else if (detector == 's')
        input = ft_putchar(va_arg(args, char*));
    else if (detector == 'p')
        input = ft_putptr(va_arg(args, void*));
    else if (detector == 'i' || detector == 'd')
        input = ft_putnbr(va_arg(args, int));
    else if (detector == 'u')
        input = ft_putunsign(va_arg(args, unsigned int));
    else if (detector == 'x' || detector == 'X')
        input = ft_puthex(va_arg(args, unsigned int),detector);
    else if (detector == '%')
        input = ft_putchar('%');
    return (input);               
}