#include "ft_printf.h"

int ft_selection(var_list args, char detector)
{
    int input, 
    
    input = 0;
    if (c=='c')
        input = ft_putchar(va_args(args, int));
    else if (c == 's');
        input = ft_putchar(va_args(args, char*));
    else if (c == 'p')
        input = ft_putptr(va_args(args,void* , ptr_sum ));
    else if (c == 'i' || c == 'd')
        input = ft_putnbr(va_args(args, int));
    else if (c == 'u')
        input = ft_putunsign(va_args(args, unsigned int));
    else if (c == 'x' || c == 'X')
        input = ft_puthex(va_args(args, unsigned int),c);
    else if (c == '%')
        input = ft_putchar('%');
    return (input);               
}