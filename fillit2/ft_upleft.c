/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upleft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 23:48:17 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/07 00:35:56 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***ft_upleft(fillit)
{
	int i;
	int j;
	int k;
	int l;

	k = -1;
	j = -1;
	i = -1;
	l = 3;
	while (++k < fillit->nbTetri)
	{
		while (++j < 4)
		{
			while (++i < 2)
			{
				if (fillit->position[k][j][0] < l)
					l = tetri[k][j][0];
			}
			i = -1;
		}
		j = -1;
	}
	k = -1;

	

	while(++k < fillit->nbTetri)
	{
		while (++j < 4)
		{
			fillit->tetri[k][j][i] = tetri[k][j][i] - l;
		}
		j = -1;
	}
}
