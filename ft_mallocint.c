/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 14:10:31 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/18 15:20:02 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		***ft_mallocint(int nbTetri)
{
	int ***position;
	int i;

	i = -1;
	if (!(position = (int ***)ft_memalloc(sizeof(int**) * (nbTetri + 1))))
		return (NULL);
	while (++i <= nbTetri)
	{
		if (!(position[i] = (int**)ft_memalloc(sizeof(int*) * 5)))
			return (NULL);
	}
	position[nbTetri] = NULL;
	return (position);
}
