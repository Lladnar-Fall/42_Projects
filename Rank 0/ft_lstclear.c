#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;

	if (!*lst)
		return;
	while (*lst)
	{
		n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n;
	}	
	*lst = NULL;
}
