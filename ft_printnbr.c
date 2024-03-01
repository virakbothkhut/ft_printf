/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:45:00 by vkhut             #+#    #+#             */
/*   Updated: 2024/02/26 16:47:12 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(long n, int base, int uppercase)
{
	int			output;
	const char	*string;

	output = 0;
	if (n < 0)
	{
		output += write(1, "-", 1);
		output += ft_printnbr(-n, base, uppercase);
	}
	else if (n < base)
	{
		if (uppercase)
			string = "0123456789ABCDEF";
		else
			string = "0123456789abcdef";
		return (output += write(1, &string[n], 1));
	}
	else
	{
		output += ft_printnbr(n / base, base, uppercase);
		output += ft_printnbr(n % base, base, uppercase);
	}
	return (output);
}

// int	main(void)
// {
// 	long	number = 53278;
// 	int base = 16;
// 	int uppercase = 1;

// 	int characters_written = ft_printnbr(number, base, uppercase);
// 	write(1, "\n", 1);
// 	write(1, &characters_written, sizeof(characters_written));
// 	return (0);
// }