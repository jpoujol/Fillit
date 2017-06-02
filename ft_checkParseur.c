/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkParseur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 14:04:00 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/19 15:32:33 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_checkParseur(char ***tetri)
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
				ft_putchar(tetri[k][j][i]);
			}
			ft_putchar('\n');
			i = -1;
		}
		ft_putchar('\n');
		j = -1;
	}
}
