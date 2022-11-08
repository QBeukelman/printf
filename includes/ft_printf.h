/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: quentinbeukelman <quentinbeukelman@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 10:14:04 by quentinbeuk   #+#    #+#                 */
/*   Updated: 2022/10/29 10:30:00 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// Print
int		ft_printf(const char *input, ...);

// Tools
int		ft_putchar(int c);
int		ft_printstring(char *str);
void	ft_putstr(char *str);
int		ft_print_dec(int number);

// Pointers
int		ft_print_p(unsigned long long p);
void	ft_ptr_hex(uintptr_t number);
int		ft_count_p(uintptr_t number);

// Unsigned
int		ft_print_unsigned(unsigned int nbr);
char	*ft_itoa_unsigned( unsigned int nbr);
int		ft_number_len(unsigned int nbr);

// Hex
int		ft_print_hex(unsigned int nbr, const char format);
void	ft_put_hex(unsigned int nbr, const char format);
int		ft_hex_length(unsigned int nbr);

#endif
