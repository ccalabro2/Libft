/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 01:12:39 by ccalabro          #+#    #+#             */
/*   Updated: 2024/02/06 18:19:34 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			ptr = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return ((char *)ptr);
}
