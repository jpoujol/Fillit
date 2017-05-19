/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replaceTetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 16:09:41 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/19 16:49:43 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_replaceTetri(char **map, char ***tetri, int *diff, int nTetri)
{
	int i;
	int j;

	i = -1;
	while (tetri[nTetri][++i])
	{
		j = -1;
		while (tetri[nTetri][i][++j])
		{
			if (tetri[nTetri][i][j] == '#')
			{
				if (((j - diff[1]) < 0 || (i - diff[0]) < 0) ||
						ft_isFree(map, i - diff[0], j - diff[1] == 0))
				{
					ft_clearLastTetri(map, '#');
					return (map);
				}
				if (ft_isFree(map, i - diff[0], j - diff[1]) == 1)
					map[i - diff[0]][j - diff[1]] = tetri[nTetri][i][j];
			}
		}
	}
	return (map);
}
