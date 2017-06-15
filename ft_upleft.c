/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upleft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 00:21:18 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/15 05:55:41 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		***ft_initCoor(t_fillit *fillit)
{
	int i;

	i = -1;
	if (!(fillit->coor = (int ***)ft_memalloc(sizeof(int) * fillit->nbTetri + 1)))
		return (0);
	while (++i < fillit->nbTetri)
	{
		if (!(fillit->coor[i] = ft_coor(fillit->coor[i], fillit->tetri[i])))
			return (0);
	}
	fillit->coor[fillit->nbTetri] = NULL;
	return (fillit->coor);
}

int   **ft_coor(int **coor, char **tetri)
{
	int		i;
	int		j;
	int		y;

	i = 0;
	j = 0;
	y = 0;
	coor = (int**)ft_memalloc(sizeof(int*) * 2);
	coor[0] = (int*)ft_memalloc(sizeof(int) * 4);
	coor[1] = (int*)ft_memalloc(sizeof(int) * 4);
	while (i < 4 && y != 4)
	{
		if (j == 4)
		{
			j = 0;
			i++;
		}
		if (tetri[i][j] == '#')
		{
			coor[0][y] = j;
			coor[1][y] = i;
			y++;
		}
		j++;
	}
	return (coor);
}

int		**ft_upLeft(int **coor)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i < 2)
	{
		k = 3;
		j = -1;
		while (++j < 4)
		{
			if (coor[i][j] < k)
			{
				k = coor[i][j];
			}
		}
		j = -1;
		while (++j < 4)
		{
			coor[i][j] = coor[i][j] - k;
		}
	}
	return (coor);
}

int   ***ft_upAllLeft(t_fillit *fillit)
{
	int  i;

	i = -1;
	ft_printCoor(fillit->coor[0]);
	while (1);
	//ft_printCoor(fillit->coor[0]);
	while (++i < fillit->nbTetri)
	{
		//fillit->coor[i] = ft_upLeft(fillit->coor[i]);
	}
	return (fillit->coor);
}
