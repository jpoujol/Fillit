/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocTetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 12:09:37 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/17 14:26:13 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char ***ft_memtab(int len)
{
	char ***tab;
	int i;
	int j;

	i = -1;
	j = 0;
	while (!(tab = (char***)ft_memalloc(sizeof(char **) * len + 1)))
		continue ;
	tab[len] = NULL;
	while (tab[++i])
	{
		if (!(tab[i] = (char**)ft_memalloc(sizeof(char *) * 5)))
			return NULL;
	}
	return (tab);
}
