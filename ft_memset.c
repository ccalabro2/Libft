/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:01:18 by ccalabro          #+#    #+#             */
/*   Updated: 2024/02/06 18:02:43 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*strptr;
	size_t	i;

	strptr = (char *)ptr;
	i = 0;
	while (i < count)
	{
		strptr[i] = value;
		i++;
	}
	return (ptr);
}
