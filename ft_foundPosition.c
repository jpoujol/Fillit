/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foundPosition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 12:56:57 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/19 14:04:52 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		***ft_foundPosition(char ***tetri)
{
	int ***position;
	int i;
	int j;
	int k;
	int l;

	i = -1;
	j = -1;
	k = 0;
	l = 0;
	while (tetri[k])
		k++;
	if (!(position = ft_mallocint(k)))
		return (NULL);
	k = -1;
	while (tetri[++k])
	{
		while (tetri[k][++j])
		{
			while (tetri[k][j][++i])
			{
				if (tetri[k][j][i] == '#')
				{
					if (!(position[k][l] = (int*)ft_memalloc(sizeof(int) * 3)))
						return (NULL);
					position[k][l][0] = i;
					position[k][l][1] = j;
					l++;
				}
			}
			i = -1;
		}
		position[k][l] = NULL;
		l = 0;
		j = -1;
	}
	return (position);
}
