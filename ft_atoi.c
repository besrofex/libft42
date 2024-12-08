/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:02:23 by ylabser           #+#    #+#             */
/*   Updated: 2024/10/30 12:05:09 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_space(char c)
{
	if (c == 32 || (c <= 13 && c >= 9))
		return (1);
	return (0);
}

static int	check_signe(int signe)
{
	if (signe < 0)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	nb;
	long	valeur_precedente;

	i = 0;
	nb = 0;
	signe = 1;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signe *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		valeur_precedente = nb;
		nb = nb * 10 + str[i] - 48;
		if (nb / 10 != valeur_precedente)
			return (check_signe(signe));
		i++;
	}
	return ((int)(nb * signe));
}