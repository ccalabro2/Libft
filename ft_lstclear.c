/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:41:48 by ccalabro          #+#    #+#             */
/*   Updated: 2024/02/06 17:53:12 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	current_node = *lst;
	while (current_node != NULL)
	{
		tmp = current_node;
		current_node = current_node->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
