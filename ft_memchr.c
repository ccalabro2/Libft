/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:58:25 by ccalabro          #+#    #+#             */
/*   Updated: 2024/02/06 18:01:41 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cs;
	size_t			i;

	ptr = (unsigned char *)s;
	cs = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == cs)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}
