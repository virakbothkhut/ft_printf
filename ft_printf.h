/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:44:53 by vkhut             #+#    #+#             */
/*   Updated: 2024/02/27 17:40:00 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printchar(char c);
int	ft_printf(const char *str, ...);
int	ft_printnbr(long n, int base, int uppercase);
int	ft_printptr(unsigned long long ptr);
int	ft_printstr(char *s);
#endif
