#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *val;

    if (*lst)
    {
        while (*lst != NULL)
        {
            val = (*lst)->next;
            ft_lstdelone(*lst, del);
            *lst = val;
        }
        *lst = NULL;
    }
}