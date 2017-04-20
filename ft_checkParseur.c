/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkParseur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 14:04:00 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/04/20 13:57:46 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_checkParseur(char ***tetri)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (tetri[k] != '\0')
	{
		while (tetri[k][j] != '\0')
		{
			while (tetri[k][j][i] != '\0')
			{
				ft_putchar(tetri[k][j][i]);
				i++;
			}
			ft_putchar('\n');
			j++;
			i = 0;
		}
		ft_putchar('\n');
		j = 0;
		k++;
	}
}
