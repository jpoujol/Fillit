/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkTetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 13:14:56 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/04/20 16:31:49 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*int		ft_checkTetri(char ***tetri, char c)
{
	int i;
	int j;
	int nbLink;

	i = 0;
	j = 0;
	nbLink = 0;
	while (*tetri[j][i] != '\0')
	{
		while (*tetri[j][i] != '\0')
		{
			if (*tetri[j][i] == c) // c represente le caractere du tetri
			{
				ft_putstr("test");
				if (**tetri[i + 1] == c || **tetri[i - 1] == c ||
					*tetri[j + 1][i] == c || *tetri[j - 1][i])
						nbLink++;
			}
			i++;
		}
		i = 0;
		j++;
	}
	ft_putnbr(nbLink);
	if (nbLink == 6 || nbLink == 8)
		return (1);
	return (0);
}*/

int		ft_checkTetri(char ***tetri, char c)
{
	int i;
	int j;
	int k;
	int nbLink;
	int goodTetri;
	
	i = 0;
	j = 0;
	k = 0;
	nbLink = 0;
	goodTetri = 0;
	while (tetri[k])
	{
		while (tetri[k][j])
		{
			while (tetri[k][j][i])
			{
				if (tetri[k][j][i] == c)
				{
					if (tetri[k][j][i + 1] && tetri[k][j][i + 1] == c)
						nbLink++;
					if (tetri[k][j][i - 1] && tetri[k][j][i - 1] == c)
						nbLink++;
					if (tetri[k][j + 1] && tetri[k][j + 1][i] == c)
						nbLink++;
					if (tetri[k][j - 1] && tetri[j][j - 1][i] == c)
						nbLink++;
				}
				i++;
			}
			i = 0;
			j++;
		}
		//ft_putnbr(nbLink);
		//if (!(nbLink == 6) || !(nbLink == 8))
		//	return (0);
		nbLink = 0;
		j = 0;
		k++;
	}
	return (nbLink);
}
