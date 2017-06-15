/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 14:17:46 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/15 05:59:53 by jpoujol-         ###   ########.fr       */
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
	t_fillit fillit;
	int fd;
	char *str;

	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	str = ft_readfile(fd);
	ft_initStruct(&fillit, str);
	if (ft_checkTetri(&fillit, '#') == 0)
		ft_putendl("error");
	//ft_checkParseur(&fillit);
	ft_upAllLeft(&fillit);
	ft_fillit(&fillit);
	ft_printMap(&fillit);
	free(&fillit);
	close(fd);
	return (0);
}
