#include "ft_printf.h"

static int ft_sizehex(uintptr_t u)
{
    int i;
    i = 0;
    while(u)
    {
        i++;
        u /= 16;
    }
    return (i);
}

static char *ft_itohex(uintptr_t u)
{
    char *ptr;
    int size;
    int i;

    size = ft_sizehex(u);
    ptr = malloc(sizeof(char) * (size + 1));
    if(!ptr)
    return (NULL);
    ptr[size] = '\0';
    while (u)
    {
        i = u % 16;
        if (i < 10)
            ptr[size - 1] = i + '0';
        else
            ptr[size - 1] = i + 87;
        u /= 16;
        size--; 
    }
    return (ptr);
}

int ft_putptr(uintptr_t u)
{
    char *s;
    int size;

    size = 0;
    s = NULL:
    if (!u)
    {
        s = "(null)";
        ft_putstr_fd(s,1);
        return (ft_strlen(s));
    }
    size += write(1, "0x", 2);
    s = ft_itohex(u);
    size += ft_putstr(s);
    free(s);
    return (size);
}