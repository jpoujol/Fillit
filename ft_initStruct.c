/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initStruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 13:02:33 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/05/29 14:14:34 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_initStruct(t_fillit	*fillit, char *str)
{
	fillit->tetri = ft_parseur(str);
	fillit->nbTetri = ft_nbTetri(str);
	fillit->position = ft_foundPosition(fillit);
	fillit->sizeMap = 2;
	fillit->notCount = 0;
}
