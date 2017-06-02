/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printMap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 13:02:39 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/23 12:31:10 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_printMap(t_fillit *fillit)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++j < fillit->sizeMap)
	{
		while (++i < fillit->sizeMap)
		{
			ft_putchar(fillit->map[j][i]);
		}
		i = -1;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
