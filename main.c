/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: quentinbeukelman <quentinbeukelman@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 11:18:01 by quentinbeuk   #+#    #+#                 */
/*   Updated: 2022/11/03 11:08:40 by quentinbeuk   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	int	result;
	int	ft_result;

	ft_result = ft_printf("%c", 'a');
	printf("\nft_result: %d\n\n", ft_result);
	result = printf("%c", 'a');
	printf("\nresult: %d\n\n", result);
}
