/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:33:45 by ccalabro          #+#    #+#             */
/*   Updated: 2024/02/06 17:40:42 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	tot;

	tot = count * size;
	if (count + size < count || count + size < size || tot > 2147483424)
	{
		return (NULL);
	}
	ptr = malloc(tot);
	if (!ptr)
	{
		return (NULL);
	}
	while (tot--)
		((char *)ptr)[tot] = 0;
	return (ptr);
}
