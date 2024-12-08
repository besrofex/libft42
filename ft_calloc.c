/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:06:30 by ylabser           #+#    #+#             */
/*   Updated: 2024/10/30 12:06:39 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	a;

	a = count * size ;
	if (size && count != (a / size))
		return (NULL);
	arr = (void *)malloc(a);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, (a));
	return (arr);
}
