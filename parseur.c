/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 14:17:46 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/03/24 17:09:24 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_parseur(char *str)
{
	int i;
	int j;
	char *tetri;

	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i] != '\n')
		{
			i++;
		}
		tetri = ft_strsub(str, j, i - j);
		ft_putstr(tetri);
	}
	return (tetri);
}

int		ft_nbtetri(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
		while (str[i] != '\0')
		{
			i++;
			ft_putnbr(i);
		}
		i++;
	ft_putnbr(j);
	return (j);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
		return (0);
	ft_nbtetri(argv[1]);
	//ft_parseur(argv[1]);
	return (0);
}
