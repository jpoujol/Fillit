/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearLastTetri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 13:33:15 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/09 03:51:42 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_clearLastTetri(char **map, char letter)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (map[++i])
	{
		while (map[++j])
		{
			if (map[i][j] == letter)
				map[i][j] = '.';
		}
		j = -1;
	}
	return (map);
}
