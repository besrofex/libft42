/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:25:11 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/01 19:17:27 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isadmet(char const*s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_isadmet(set, s1[start]))
		start++;
	while (end > start && ft_isadmet(set, s1[end - 1]))
		end--;
	arr = malloc (sizeof(char) * ((end - start) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < (end - start))
	{
		arr[i] = s1[start + i];
		i++;
	}
	arr[end - start] = '\0';
	return (arr);
}
