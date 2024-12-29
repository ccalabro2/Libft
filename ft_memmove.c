/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:00:45 by ccalabro          #+#    #+#             */
/*   Updated: 2024/02/06 18:02:28 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	if (dest_ptr > src_ptr)
	{
		while (n--)
			dest_ptr[n] = src_ptr[n];
	}
	else
	{
		while (n--)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return ((void *)dest_ptr);
}
