#include "ft_printf.h"

static int ft_sizeunsign(unsigned int ui)
{
    int i;
    i = 0;
    while(ui)
    {
        i++;
        ui /= 10;
    }
    return (i);
}

char *ft_itoaunsign(unsigned int ui)
{
    char *ptr;
    int size;

    size = ft_sizeunsign(ui);
    ptr = malloc(sizeof(char) * (size + 1));
    if (!ptr)
        return (NULL);
    ptr[size] = "\0";
    while (ui)
    {
        ptr[size - 1] = ui % 10 + '0';
        ui /= 10;
        size--;
    }
    return (ptr);
}


int ft_putunsign(unsigned int ui)
{
    char *s;
    int size;

    if(!ui)
    { 
        write(1, "0",1);
        return (1);
    }
    s = ft_itoaunsign(ui);
    size = ft_putstr(s);
    free(s);
    return (size);
}
