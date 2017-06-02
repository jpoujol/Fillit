/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 13:49:06 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/23 13:22:39 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_diff(int x, int y, int i, int j)
{
	int *tab;

	if (!(tab = (int*)ft_memalloc(sizeof(int) * 3)))
		return (NULL);
	tab[2] = (int)NULL;
	tab[0] = y - j;
	tab[1] = x - i;
	return (tab);
}
