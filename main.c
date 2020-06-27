#include <stdio.h>
#include "libftprintf.h"


int main()
{
/*    int a = 5;


    printf("%p\n", &a);
	ft_printf("%p\n", &a);*/

    int     a;
    int     b;
    int     c = -122;

	a = printf("sveta - %c, %s, %d, %i, %x, %X, %p\n", 'a', "sveta", 55, 44, 122, 122, &c);
	b = ft_printf("sveta - %c, %s, %d, %i, %x, %X, %p\n", 'a', "sveta", 55, 44, 122, 122, &c);
	printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}


/*int		main()
{
    t_list	*new;

    new = ft_lstnew(ft_strdup("kdfndnfd"));
    new->next = ft_lstnew(ft_strdup("kdfndnfd555"));
    ft_lstprintf(&new);
    return 0;
}*/