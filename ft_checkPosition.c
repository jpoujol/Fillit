/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkPosition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 14:59:02 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/19 13:54:38 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_checkPosition(int ***position)
{
	int i;
	int j;
	int k;

	i = -1;
	j = -1;
	k = -1;
	while (position[++k])
	{
		while (position[k][++j])
		{
			while (position[k][j][++i])
			{
				ft_putnbr(position[k][j][i]);
			}
			ft_putchar('\n');
			i = -1;
		}
		ft_putchar('\n');
		j = -1;
	}
}

