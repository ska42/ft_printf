/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:51:21 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/13 16:22:43 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		free_all(char **str, int j)
{
	while (--j + 1)
		free(str[j]);
	free(str);
	return (-1);
}

int		malloc_and_fill(char **str, char const *s, char c)
{
	int i;
	int j;
	int k;
	int n;
	int size;

	i = 0;
	j = 0;
	n = 0;
	size = 0;
	while (s[i] || n > 0)
		if (s[i] && s[i++] != c)
			size = (n++ > 0) ? size : i - 1;
		else if (n > 0)
		{
			k = 0;
			if (!(str[j] = malloc(sizeof(char) * (n + 1))))
				return (free_all(str, j));
			while (k++ <= n)
				str[j][k - 1] = (k - 1 == n) ? '\0' + (n *= 0) : s[size++];
			j++;
		}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		size;
	int		i;
	int		n;

	size = 0;
	i = 0;
	n = 0;
	if (!s)
		return (0);
	while (s[i])
		if (s[i++] != c)
			n++;
		else if (n > 0)
			n = 0 * size++;
	if (!(i *= 0) && n > 0 && !(n *= 0))
		size++;
	if (!(str = malloc(sizeof(char *) * (size + 1))) && !(size *= 0))
		return (0);
	if ((size = malloc_and_fill(str, s, c)) == -1)
		return (0);
	str[size] = 0;
	return (str);
}
