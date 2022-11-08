/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 10:50:36 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/10/12 10:50:37 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return the last node of the list.

// Paramaters:
// lst: the beginning of the list.

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	current_node = lst;
	if (current_node == NULL)
		return (NULL);
	while (current_node -> next != NULL)
	{
		current_node = current_node -> next;
	}
	return (current_node);
}
