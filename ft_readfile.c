/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpoujol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:35:44 by jpoujol-          #+#    #+#             */
/*   Updated: 2017/03/27 15:21:11 by jpoujol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_readfile(int fd)
{
	char *buf;
	int ret;

	buf = ft_memalloc(BUFF_SIZE + 1);
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	//ft_putstr(buf);
	return (buf);
}
