/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocTetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 12:09:37 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/04/20 13:54:50 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char **ft_malloc2d(int nbColone, int nbLigne)
{
	char **tetri;
	int i;

	i = -1;
	while (!(tetri = (char**)ft_memalloc(nbLigne + 1)))
			continue;
	while (++i < nbLigne)
	{
		while (!(tetri[i] = ft_strnew(nbColone)))
			continue;
		ft_memset((void*)tetri[i], (int) '.', nbColone);
	}
	return (tetri);
}

char ***ft_malloc3d(int nbColone, int nbLigne, int nbTetri)
{
	char ***tetri;
	int i;

	i = -1;
	while (!(tetri = (char***)ft_memalloc(nbTetri + 1)))
		continue;
	while (++i < nbTetri)
		while (!(tetri[i] = ft_malloc2d(nbColone, nbLigne)))
			continue;
	return (tetri);
}

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
