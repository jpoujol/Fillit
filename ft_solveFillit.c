/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solveFillit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 12:48:02 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/14 23:29:12 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit(t_fillit *fillit)
{
	int id;

	id = 0;

	ft_putendl(">>>");
	fillit->tetri = ft_changeLetter(fillit->tetri);
	fillit->map = ft_newMap(fillit->sizeMap);
	/*while (ft_solveFillit(fillit, id) == 0)
	{
		ft_freeMap(fillit);
		fillit->sizeMap++;
		ft_newMap(fillit->sizeMap);
		ft_printMap(fillit);
	}*/
	ft_freeMap(fillit);
	fillit->sizeMap++;
	ft_newMap(fillit->sizeMap);
	ft_solveFillit(fillit, id);
	ft_printMap(fillit);

}

int		**ft_setetrix(t_fillit *fillit, int **coor)
{
	int i;
	int k;

	i = -1;
	k = fillit->sizeMap;
	while (++i < 4)
	{
		if (coor[0][i] < k)
			k = coor[0][i];
	}
	i = -1;
	while (++i < 4)
		coor[0][i] = coor[0][i] - k;
	return (coor);
}

int		ft_solveFillit(t_fillit *fillit, int id)
{
	int x;
	int y;
	int **tmp_coor;

	y = -1;
	if(fillit->coor[id] == NULL)
		return (1);
	tmp_coor = ft_tmpCoor(fillit->coor[id]);
	while (++y < (fillit->sizeMap - 1))
	{
		tmp_coor = ft_setetrix(fillit, tmp_coor);
		x = -1;
		while (++x < (fillit->sizeMap - 1))
		{
			if (ft_isFree(fillit, tmp_coor) == 1)
			{
				fillit->map = ft_placeTetri(tmp_coor, fillit->map, (char)('A' + id));
				if (ft_solveFillit(fillit, ++id) == 1)
				{
					return (1);
				}
				else
				{
					ft_putendl("OOOK");
					fillit->map = ft_clearLastTetri(fillit->map, (char)('A' + id));
					id--;
				}
			}
			tmp_coor = ft_addx(tmp_coor);
		}
		tmp_coor = ft_addy(tmp_coor);
	}
	return (0);
}

//add x au tableau de coor
