/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabTravel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 23:16:50 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/01 16:57:03 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_tabTravel(t_fillit *fillit)
{
	static int x = -1;
	static int y = -1;
	static int i = 0;
	int *tab;

	while (++y < fillit->sizeMap)
	{
		x = -1;
		while (++x < fillit->sizeMap)
		{
			if (ft_isFree(fillit, x, y) == 1)
			{
				ft_putstr("coordonees y, x :");
				ft_putnbr(y);
				ft_putnbr(x);
				ft_putchar('\n');
				ft_putchar('\n');
				ft_putnbr(i);
				if (!(fillit->position[i]))
				{
					return (fillit->map);
				}
				tab = ft_diff(fillit->position[i][0][0], fillit->position[i][0][1], x, y); //positon[i][0][0] = x position[i][0][1] = y
				if (ft_replaceTetri(fillit, tab, i) == 1)
				{
					ft_putendl("replaceTetri");
					x = -1;
					y = -1;
					free(tab);
					i++;
					if (i == fillit->nbTetri)
					{
						ft_putendl("plus de tetri");
						exit(0);
					}
					break ;
				}
			}
		}
	}
	if (fillit->notCount == 1)
	{
		i = i - 1;
		x = -1;
		y = -1;
		ft_clearLastTetri(fillit, ('A' + i - 1));
		ft_solveFillit(fillit);
	}
	if (y == fillit->sizeMap)
	{
		x = -1;
		y = -1;
		i = 0;
		ft_freeMap(fillit);
		fillit->sizeMap++;
		ft_solveFillit(fillit);
	}
	return (fillit->map);
}

//IDEE POUR BACKTRACKING
// declencheur dans ft_replaceTetri sur count
// pour signaler son invalidite (variable dans struct)    remarque il
// s'active que quand il restes des tetri
// Si map parcourus + tetri non valide
// Revenir au precedent puis suivant
// Pb: jonglage entre i + 1 et i - 1
// Suffit de mettre une condition entre le fait
// detre au bout de la map et que le tetri ne soit
 // pas complet pour i - 1
