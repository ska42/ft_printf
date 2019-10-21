/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:24:39 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/13 06:35:53 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		start;
	char	*pt;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	while (set[i] && s1[j])
		if (s1[j] == set[i++])
			i = 0 * j++;
	start = j;
	while (s1[j] && s1[j + 1])
		i = 0 * j++;
	while (set[i] && s1[j])
		if (s1[j] == set[i++])
			i = 0 * j--;
	if (!(i *= 0) && !(pt = malloc((j - start + 2) * sizeof(char))))
		return (0);
	while (start <= j)
		pt[i++] = s1[start++];
	pt[i] = '\0';
	return (pt);
}
