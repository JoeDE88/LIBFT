#include "libft.h"


void	*(foo)(void *content)
{
	int	*n = (int *)content;
	(*n) *= 10;
	return (content); 
}

int	main(void)
{
	/* t_list	*list;
	t_list	*list2;
	t_list	*newlist;
	int	*a = malloc(sizeof(int));
	int	*b = malloc(sizeof(int));
	int	*c = malloc(sizeof(int));
	int	*d = malloc(sizeof(int));
	int	*e = malloc(sizeof(int));
	
	*a = 45;
	*b = 2;
	*c = 98;
	*d = 10;
	*e = 6;
	list = ft_lstnew(a);
	ft_lstadd_front(&list, ft_lstnew(b));
	ft_lstadd_front(&list, ft_lstnew(c));
	ft_lstadd_front(&list, ft_lstnew(d));
	ft_lstadd_front(&list, ft_lstnew(e));
	list2 = list;
	while (list2 != NULL)
	{
		printf("num: %d\n", *(int *)list2->content);
		list2 = list2->next;
	}
	newlist = ft_lstmap(list, foo, free);
	while (newlist != NULL)
	{
		printf("new num: %d\n", *(int *)newlist->content);
		newlist = newlist->next;
	} */
}