/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkTetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 13:14:56 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/03/28 16:08:32 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkTetri(char ***tetri, char c)
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
			if(*tetri[j][i] == c)
			{
				if (**tetri[i + 1] == c || **tetri[i - 1] == c ||
					*tetri[j + 1][i] == c || *tetri[j - 1][i])
						nbLink++;
			}
			i++;
		}
		j++;
	}
	ft_putnbr(nbLink);
	if (nbLink == 6 || nbLink == 8)
		return (1);
}

