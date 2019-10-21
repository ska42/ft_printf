/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:09:07 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 15:20:47 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (i < (int)len && haystack[i] != '\0')
	{
		temp = i;
		while (needle[j] == haystack[i] &&
			needle[j] != '\0' && haystack[i] != '\0' && i < (int)len)
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[temp]);
		i = temp + 1;
		j = 0;
	}
	return (0);
}
