/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newMap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 13:50:30 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/29 14:47:18 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_newMap(int len)
{
	char **map;
	int i;

	i = -1;
	while (!(map = (char**)ft_memalloc(sizeof(char*) * len + 1)))
		continue;
	map[len] = NULL;
	while (++i < len)
	{
		while (!(map[i] = (char*)ft_strnew(sizeof(len))))
			continue;
		ft_memset((void*)map[i], 46, len);
	}
	return (map);
}
