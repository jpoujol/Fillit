/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkParseur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 14:04:00 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/09 03:18:43 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_checkParseur(t_fillit *fillit)
{
	int i;
	int j;
	int k;

	i = -1;
	j = -1;
	k = -1;
	while (++k < fillit->nbTetri)
	{
		while (++j < 4)
		{
			while (++i < 4)
			{
				ft_putchar(fillit->tetri[k][j][i]);
			}
			i = -1;
			ft_putchar('\n');
		}
		j = -1;
		ft_putchar('\n');
	}
}
