/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:19:12 by emaune            #+#    #+#             */
/*   Updated: 2018/06/28 12:17:06 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char*)b;
	while (i < len)
	{
		mem[i] = c;
		i++;
	}
	return (b);
}
