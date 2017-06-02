/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replaceTetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 16:09:41 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/30 22:34:43 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_replaceTetri(t_fillit *fillit, int *diff, int nTetri)
{
	int i;
	int j;
	int count;

	i = -1;
	count = 0;
	if (nTetri > fillit->nbTetri)
		return (0);
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (fillit->tetri[nTetri][i][j] == ('A' + nTetri))
			{
				ft_putnbr(i);
				ft_putnbr(j);
				ft_putchar('\n');
				if ((j - diff[1]) >= fillit->sizeMap || (i - diff[0]) >= fillit->sizeMap)
				{
					ft_putendl("okkk");
					ft_clearLastTetri(fillit, ('A' + nTetri));
					ft_tabTravel(fillit);
				}
				if (ft_isFree(fillit, j - diff[1], i - diff[0]) == 1)
				{
					ft_putnbr(i);
					ft_putnbr(j);
					ft_putchar('\n');
					ft_putstr("point:");
					ft_putnbr(count);
					ft_putchar('\n');
					ft_putchar('\n');
					ft_putchar('\n');
					ft_putstr("coordonnees diff map:");
					ft_putnbr(diff[0]);
					ft_putnbr(diff[1]);
					ft_putchar('\n');
					ft_putchar('\n');
					count++;
					fillit->map[i - diff[0]][j - diff[1]] = fillit->tetri[nTetri][i][j];
				}
			}
		}
	}
	fillit->notCount = 0;
	ft_printMap(fillit);
	if (count != 4)
	{
		fillit->notCount = 1;
		ft_putnbr(count);
		ft_putendl("not the count");
		ft_clearLastTetri(fillit, ('A' + nTetri));
		ft_tabTravel(fillit);
	}
	return (1);
}
