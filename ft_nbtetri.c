/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbtetri.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 15:55:43 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/03/24 16:59:30 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nbtetri(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\n' && str[i + 1] != '\n')
		{
			i++;
		}
		i++;
		j++;
	}
	ft_putnbr(j);
	return (j);
}
