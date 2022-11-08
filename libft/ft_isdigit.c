/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 08:41:21 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/10/18 20:30:34 by quentinbeuk   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Assignment: Recreate Standard C library function isdigit(3).
// Paramaters: character c,
// Return Value: 1 if the character is a decimal digit character and 0 if the
// character tests false.

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
