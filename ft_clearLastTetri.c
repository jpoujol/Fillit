/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearLastTetri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 13:33:15 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/26 20:48:34 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_clearLastTetri(t_fillit *fillit, char letter)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (fillit->map[++i])
	{
		while (fillit->map[i][++j])
		{
			if (fillit->map[i][j] == letter)
				fillit->map[i][j] = '.';
		}
		j = -1;
	}
	return (fillit->map);
}
