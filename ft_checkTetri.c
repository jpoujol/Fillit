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

int		ft_checkTetri(t_fillit *fillit, char c)
{
	int nbLink;

	fillit->i = -1;
	fillit->j = -1;
	fillit->k = -1;
	nbLink = 0;
	while (fillit->tetri[++fillit->k])
	{
		while (fillit->tetri[fillit->k][++fillit->j])
		{
			while (fillit->tetri[fillit->k][fillit->j][++fillit->i])
			{
				nbLink = ft_countLink(fillit, c);
			}
			fillit->i = -1;
		}
		if (!(nbLink == 6) && !(nbLink == 8))
			return (0);
		fillit->j = -1;
	}
	return (1);
}

int		ft_countLink(t_fillit *fillit, char c)
{
	int nbLink;

	nbLink = 0;
	if (fillit->tetri[fillit->k][fillit->j][fillit->i] == c)
	{
		if (fillit->tetri[fillit->k][fillit->j][fillit->i + 1] && fillit->tetri[fillit->k][fillit->j][fillit->i + 1] == c)
			nbLink++;
		if (fillit->tetri[fillit->k][fillit->j][fillit->i - 1] && fillit->tetri[fillit->k][fillit->j][fillit->i - 1] == c)
			nbLink++;
		if (fillit->tetri[fillit->k][fillit->j + 1] && fillit->tetri[fillit->k][fillit->j + 1][fillit->i] == c)
			nbLink++;
		if (fillit->tetri[fillit->k][fillit->j - 1] && fillit->tetri[fillit->k][fillit->j - 1][fillit->i] == c)
			nbLink++;
	}
	return (nbLink);
}
//VOIR POUR STOCKER NBTETRI DANS STRUCT + CHAR*** + INCREMENTATION LETTRE
//TEST AVEC TETRI VIDE
