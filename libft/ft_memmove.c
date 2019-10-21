/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 07:40:47 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/13 05:58:42 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		cpy[len];
	char		*pt_src;
	char		*pt_dst;

	i = 0;
	pt_src = (char *)src;
	pt_dst = (char *)dst;
	while (i < (int)len)
		cpy[i++] = *pt_src++;
	i = 0;
	while (i < (int)len)
		*pt_dst++ = cpy[i++];
	return (dst);
}
