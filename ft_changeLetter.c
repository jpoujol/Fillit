/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changeLetter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 16:36:03 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/19 16:39:51 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char ***ft_changeLetter(char ***tetri)
{
	int i;
	int j;
	int k;

	i = -1;
	j = -1;
	k = -1;
	while (tetri[++k])
	{
		while (tetri[k][++j])
		{
			while (tetri[k][j][++i])
			{
				if (tetri[k][j][i] == '#')
					tetri[k][j][i] = 'A' + k;
			}
			i = -1;
		}
		j = -1;
	}
	return (tetri);
}
