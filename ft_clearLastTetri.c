/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearLastTetri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 13:33:15 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/04/25 13:44:01 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***ft_clearLastTetri(char ***tetri, char letter)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (tetri[k])
	{
		while (tetri[k][j])
		{
			while (tetri[k][j][i])
			{
				if (tetri[k][j][i] == letter)
					tetri[k][j][i] = '.';
				i++;
			}
			i = 0;
			j++;
		}
		j = 0;
		k++;
	}
	return (tetri);
}
