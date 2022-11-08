/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/29 10:21:30 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/10/29 10:35:03 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hex_length(unsigned int nbr)
{
	int	char_count;

	char_count = 0;
	while (nbr != 0)
	{
		char_count++;
		nbr = nbr / 16;
	}
	return (char_count);
}

void	ft_put_hex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_put_hex(nbr / 16, format);
		ft_put_hex(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
		{
			if (format == 'x')
				ft_putchar(nbr - 10 + 'a');
			if (format == 'X')
				ft_putchar(nbr - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (ft_putchar('0'));
	else
		ft_put_hex(nbr, format);
	return (ft_hex_length(nbr));
}
