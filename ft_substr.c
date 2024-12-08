/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:41:52 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/01 19:30:44 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		str = (char *) malloc(1);
		if (str)
			str[0] = '\0';
		return (str);
	}
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len +1);
	return (str);
}
