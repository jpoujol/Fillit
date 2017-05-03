/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkTetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 13:14:56 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/04/24 16:06:21 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkTetri(char ***tetri, char c)
{
	int i;
	int j;
	int k;
	int nbLink;
	
	i = 0;
	j = 0;
	k = 0;
	nbLink = 0;
	while (tetri[k])
	{
		while (tetri[k][j])
		{
			while (tetri[k][j][i])
			{
				if (tetri[k][j][i] == c)
				{
					if (tetri[k][j][i + 1] && tetri[k][j][i + 1] == c)
						nbLink++;
					if (tetri[k][j][i - 1] && tetri[k][j][i - 1] == c)
						nbLink++;
					if (tetri[k][j + 1] && tetri[k][j + 1][i] == c)
						nbLink++;
					if (tetri[k][j - 1] && tetri[k][j - 1][i] == c)
						nbLink++;
				}
				i++;
			}
			i = 0;
			j++;
		}
		if (!(nbLink == 6) && !(nbLink == 8))
			return (0);
		nbLink = 0;
		j = 0;
		k++;
	}
	return (1);
}

//VOIR POUR STOCKER NBTETRI DANS STRUCT + CHAR*** + INCREMENTATION LETTRE
//TEST AVEC TETRI VIDE
