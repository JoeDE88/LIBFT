#include "libft.h"
#include <bsd/string.h>
#include <limits.h>

#define N 20

int	main(void)
{
	/* t_list	*list;
	t_list	*list2;
	t_list	*node1;
	int	*a = malloc(sizeof(int));
	int	*e = malloc(sizeof(int));
	
	*a = 45;
	*e = 6;
	list = ft_lstnew(a);
	node1 = ft_lstnew(e);
	list2 = NULL;
	ft_lstadd_back(&list2, node1); */
	char	dest[N] = "One19sizedstring!!!";
	char	src[20] = "HelloEverything";

	ft_strlcat(dest, src, 40);
	int i = 0;
	printf("\n\n");
	while (dest[i] != '\0')
	{
		printf("i: %d ---> %c\n", i, dest[i]);
		i++;
	}
}