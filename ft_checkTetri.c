/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkTetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 13:14:56 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/09 03:48:53 by jpoujol-         ###   ########.fr       */
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
	while (++fillit->k < fillit->nbTetri)
	{
		while (++fillit->j < 4)
		{
			while (++fillit->i < 4)
			{
				if (fillit->tetri[fillit->k][fillit->j][fillit->i] == c)
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
		if (fillit->tetri[fillit->k][fillit->j][fillit->i + 1] && fillit->tetri[fillit->k][fillit->j][fillit->i + 1] == c)
			nbLink++;
		if (fillit->tetri[fillit->k][fillit->j][fillit->i - 1] && fillit->tetri[fillit->k][fillit->j][fillit->i - 1] == c)
			nbLink++;
		if (fillit->tetri[fillit->k][fillit->j + 1] && fillit->tetri[fillit->k][fillit->j + 1][fillit->i] == c)
			nbLink++;
		if (fillit->tetri[fillit->k][fillit->j - 1] && fillit->tetri[fillit->k][fillit->j - 1][fillit->i] == c)
			nbLink++;
	return (nbLink);
}
//VOIR POUR STOCKER NBTETRI DANS STRUCT + CHAR*** + INCREMENTATION LETTRE
//TEST AVEC TETRI VIDE
