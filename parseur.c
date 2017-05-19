/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 14:17:46 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/19 16:53:13 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***ft_parseur(char *str)
{
	int i;
	int nbTetri;
	char ***tetri;

	i = -1;
	nbTetri = ft_nbTetri(str);
	if (!(tetri = ft_memtab(nbTetri)))
		return NULL;
	while (++i < nbTetri)
	{
		if (!(tetri[i] = ft_strsplit(ft_strsub(str, i * 21, 21), '\n')))
			return NULL;
	}
	return (tetri);
}

size_t		ft_nbTetri(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
			j++;
		i++;
	}
	j = j + 1;
		//ft_putnbr(j);
	return (j);
}

int		main(int argc, char **argv)
{
	int fd;
	char *str;
	char ***tetri;
	int nbTetri;
	//int ***position;
	//int *tab;
	//char **map;

	if (argc > 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	//ft_nbtetri(ft_readfile(fd));
	str = ft_readfile(fd);
	nbTetri = ft_nbTetri(str);
	//ft_putnbr(nbTetri);
	//ft_putstr(str);
	//tetri = ft_memalloc(nbTetri + 1);
	tetri = ft_parseur(str);
	tetri = ft_changeLetter(tetri);
	//ft_checkTetri(tetri, '#');
	//ft_putchar('\n');
	//ft_clearLastTetri(tetri, '#');
	//ft_checkParseur(tetri);
	//position = ft_foundPosition(tetri);
	//tab = ft_diff(position[0][0][0], position[0][0][1], 0, 0);
	//map = ft_newMap(4);
	//ft_printMap(map);
	//ft_putchar('\n');
	//map = ft_replaceTetri(map, tetri, tab, 0);
	//ft_printMap(map);
	close(fd);
	return (0);
}
