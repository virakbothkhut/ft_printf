#include "ft_printf.h"

int ft_putstr(char *s)
{
    if(!s)
    s = "null";
    ft_putstr_fd(s,1);
    return (ft_strlen(s));
}   