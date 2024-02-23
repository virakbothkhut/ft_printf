#include "ft_printf.h"

int ft_putnbr(int i)
{
    char *s;
    int size;

    s = ft_itoa(i);
    size = ft_putstr(s);
    free(s);
    return (size);
}

int main ()
{
    int number = 12345;
    printf("Printing number using ft_putnbr: ");
    int printedSize = ft_putnbr(number);
    return 0;

}