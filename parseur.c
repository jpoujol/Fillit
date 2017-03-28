/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 14:17:46 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/03/28 16:08:37 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***ft_parseur(char *str)
{
	int i;
	int j;
	char ***tetri;

	i = 0;
	tetri = ft_memalloc(ft_nbtetri(str) + 1);
	*tetri = ft_memalloc(5);
	//ft_putstr(str);
	while(str[i] != '\0')
	{
		j = i;
		while(str[i] != '\n')
		{
			i++;
		}
		**tetri = ft_strsub(str, j, i - j);
		//ft_putstr(**tetri);
		//ft_putchar('\n');
		i++;
	}
	return (tetri);
}

size_t		ft_nbtetri(char *str)
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

	if (argc > 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	//ft_nbtetri(ft_readfile(fd));
	str = ft_readfile(fd);
	//ft_putstr(str);
	tetri = ft_parseur(str);
	ft_checkTetri(tetri, '#');
	close(fd);
	return (0);
}
