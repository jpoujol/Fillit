/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solveFillit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 12:48:02 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/30 22:34:23 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_solveFillit(t_fillit *fillit)
{
	fillit->tetri = ft_changeLetter(fillit->tetri);
	fillit->map = ft_newMap(fillit->sizeMap);
	ft_printMap(fillit);
	ft_tabTravel(fillit);
	ft_printMap(fillit);
}

//AGRANDISSEMENT MAAAAAAAAAAAAAAAAAAAAAAAAAAAAP
