/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foundPosition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 12:56:57 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/02 16:48:36 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_foundPosition(char ***tetri)
{
	int **position;
	int i;
	int j;
	int k;

	i = -1;
	j = 0;
	k = 0;
	while (tetri[k])
		k++;
	if (!(position = (int**)ft_memalloc(sizeof(int*) * (k + 1))))
		return (NULL);
	while (++i <= k)
	{
		if (!(position[i] = (int*)ft_memalloc(sizeof(int) * 3)))
			return (NULL);
	}
	position[k] = NULL;
	i = 0;
	k = 0;
	while (tetri[k])
	{
		while (tetri[k][j])
		{
			while (tetri[k][j][i] && tetri[k][j][i] != '#')
			{
				i++;
			}
			if (tetri[k][j][i] == '#')
			{
				position[k][0] = i;
				position[k][1] = j;
				break ;
			}
			i = 0;
			j++;
		}
		j = 0;
		k++;
	}
	k = 0;
	while (position[k])
	{
		ft_putnbr(position[k][1]);
		ft_putnbr(position[k][0]);
		ft_putchar('\n');
		k++;
	}
	return (position);
}
