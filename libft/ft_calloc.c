/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:23:43 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 15:16:24 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int			total;
	char		*c;
	void		*pt;
	void		*start;

	total = count * size;
	if (!(pt = malloc(total)))
		return (0);
	start = pt;
	while (total--)
	{
		c = (char *)pt;
		*c = 0;
		pt++;
	}
	return (start);
}
