/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initStruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 13:02:33 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/06/15 01:09:54 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_initStruct(t_fillit	*fillit, char *str)
{
	fillit->tetri = ft_parseur(str);
	ft_putendl("parseur ok");
	fillit->nbTetri = ft_nbTetri(str);
	ft_putendl("nbTetri ok");
	fillit->coor = ft_initCoor(fillit);
	ft_putendl("init coor ok");
	fillit->sizeMap = 2;
}
