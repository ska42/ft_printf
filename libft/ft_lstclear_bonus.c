/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:40:50 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/10 13:59:41 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	t_list *curr;

	curr = *lst;
	if (curr)
	{
		while (curr->next)
		{
			curr = *lst;
			del(curr->content);
			next = curr->next;
			free(curr);
			*lst = NULL;
			*lst = next;
		}
	}
}
