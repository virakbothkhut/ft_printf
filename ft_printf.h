#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h> // for malloc free, 
#include <unistd.h> // for write 
#include <stdarg.h> // for va_va_start, va_arg, va_copy
#include <stdio.h> // for real printf

int     ft_printf(const char *str, ...);
int     ft_selection(va_list args, char data_type);

#endif