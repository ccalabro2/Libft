/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:40:25 by ccalabro          #+#    #+#             */
/*   Updated: 2024/02/06 17:52:47 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_s)
{
	if (!lst || !new_s)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new_s;
	else
		*lst = new_s;
}
