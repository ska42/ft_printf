/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:48:56 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/11 17:33:05 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *new;
	t_list *next;
	t_list *start;

	if (!lst)
		return (0);
	if (!(new = malloc(sizeof(t_list))))
		return (0);
	new->content = f(lst->content);
	start = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(next = malloc(sizeof(t_list))))
			return (0);
		next->content = f(lst->content);
		new->next = next;
		new = new->next;
	}
	new->next = 0;
	return (start);
}
