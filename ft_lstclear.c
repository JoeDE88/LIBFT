/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz-ec <jdiaz-ec@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:51:27 by jdiaz-ec          #+#    #+#             */
/*   Updated: 2026/01/23 17:51:31 by jdiaz-ec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*curr;

	prev = NULL;
	curr = *lst;
	while (curr->next != NULL)
	{
		prev = curr;
		curr = curr->next;
		(*del)(prev);
	}
	free(curr);
	*lst = NULL;
}

int	main(void)
{
	t_list	*list;
	t_list	*head;
	int		*a;
	int		*b;
	int		*c;
	int		*d;
	int		*e;
	int		i = 0;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));
	d = malloc(sizeof(int));
	e = malloc(sizeof(int));
	*a = 43;
	list = ft_lstnew(a);
	*b = 64;
	ft_lstadd_front(&list, ft_lstnew(b));
	*c = 837;
	ft_lstadd_front(&list, ft_lstnew(c));
	*d = 65;
	ft_lstadd_front(&list, ft_lstnew(d));
	*e = 12;
	ft_lstadd_front(&list, ft_lstnew(e));
	head = list;
	while (head != NULL)
	{
		printf("%d: %d\n", i, *(int *)head->content);
		i++;
		head = head->next;
	}
	ft_lstclear(&list, free);
	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
	free(list);
	printf("%s\n", (char *)list);
	free(head);
}