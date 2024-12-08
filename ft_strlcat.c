/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:44:20 by ylabser           #+#    #+#             */
/*   Updated: 2024/10/30 13:40:23 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	p;
	size_t	j;

	if (!dst && size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	p = i;
	if (i >= size)
		return (ft_strlen(src) + size);
	else
	{
		j = 0;
		while (i < size - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (ft_strlen(src) + p);
	}
}
