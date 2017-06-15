/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmpCoor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 04:43:44 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/09 04:48:02 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
int		**ft_tmpCoor(int **coor)
{
	int		**tmp_coor;
	int i;
	int j;

	i = -1;
	j = -1;
	if (!(tmp_coor = (int**)ft_memalloc(sizeof(int*) * 2)))
		return (0);
	while (++i < 2)
		tmp_coor[i] = (int*)ft_memalloc(sizeof(int) * 4);
	i = -1;
	while (++i < 2)
	{
		while (++j < 4)
			tmp_coor[i][j] = coor[i][j];
	}
	return (tmp_coor);
}
