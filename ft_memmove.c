/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:45:56 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/02 14:54:49 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				i;

	if (len == 0 || dst == src)
		return (dst);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str1 < str2)
	{
		i = 0;
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			str1[len] = str2[len];
	}
	return (dst);
}
