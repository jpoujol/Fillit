/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foundPosition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 12:56:57 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/26 20:41:27 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		***ft_foundPosition(t_fillit *fillit)
{
	int l;

	fillit->i = -1;
	fillit->j = -1;
	fillit->k = -1;
	l = 0;
	if (!(fillit->position = ft_mallocInt(fillit)))
		return (NULL);
	while (fillit->tetri[++fillit->k])
	{
		while (fillit->tetri[fillit->k][++fillit->j])
		{
			while (fillit->tetri[fillit->k][fillit->j][++fillit->i])
			{
				if (fillit->tetri[fillit->k][fillit->j][fillit->i] == '#')
				{
					if (!(fillit->position[fillit->k][l] = (int*)ft_memalloc(sizeof(int) * 3)))
						return (NULL);
					fillit->position[fillit->k][l][0] = fillit->i;
					fillit->position[fillit->k][l][1] = fillit->j;
					l++;
				}
			}
			fillit->i = -1;
		}
		fillit->position[fillit->k][l] = NULL;
		l = 0;
		fillit->j = -1;
	}
	return (fillit->position);
}
