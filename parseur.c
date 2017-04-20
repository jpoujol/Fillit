/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 14:17:46 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/04/20 15:28:10 by jpoujol-         ###   ########.fr       */
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
		//ft_putnbr(j);
	return (j);
}

int		main(int argc, char **argv)
{
	int fd;
	char *str;
	char ***tetri;
	int nbTetri;

	if (argc > 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	//ft_nbtetri(ft_readfile(fd));
	str = ft_readfile(fd);
	nbTetri = ft_nbTetri(str);
	//ft_putstr(str);
	//tetri = ft_memalloc(ft_nbtetri(str) + 1);
	//*tetri = ft_memalloc(5);
	tetri = ft_parseur(str);
	//ft_checkParseur(tetri);
	ft_checkTetri(tetri, '#');
	close(fd);
	return (0);
}
