/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:42:55 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/25 16:42:57 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	*newlist;
	t_list	*newobj;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newobj = ft_lstnew(f(lst->content));
		if (newobj == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_front(&newlist, newobj);
		lst = lst->next;
	}
	return (newlist);
}
