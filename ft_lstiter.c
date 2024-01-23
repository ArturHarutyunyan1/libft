#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *val;

    val = lst;
    while (val != NULL)
    {
        f(val->content);
        val = val->next;
    }
}