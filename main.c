#include <stdio.h>
#include "libftprintf.h"


int main()
{
    int a = 5;


    printf("%p\n", "5");
	ft_printf("%p\n", "5");
    printf("%p\n", &a);
    ft_printf("%p\n", &a);

//    int     a;
//    int     b;
//    int     c = -122;

//	printf("sveta - %c, %s, %d, %i, %x, %X, %p, %u\n", 'a', "sveta", 55, 44, 122, 122, &c, 1);
//	ft_printf("sveta - %c, %s, %d, %i, %x, %X, %p, %u\n", 'a', "sveta", 55, 44, 122, 122, &c, 1);
//    printf("printf :%u\n", -2147483648);
//    ft_printf("ft_printf :%u\n", -2147483648);
//    printf("%%0.5i :<%0.5i>\n", -22);
//    ft_printf("ft_printf :%i\n", -22);
//    printf("%%0.0i :<%0.0i>\n", -22);
//    printf("  %%5i :<%5i>\n", -22);
//    printf("%%5.0i :<%5.0i>\n", -22);
//    printf("%%5.5i :<%5.5i>\n", -22);
//    printf("%%0.5i :<%0.5i>\n", -22);

//	printf(" %%0*d :<%0*d>\n", 5, 3);
//	printf("  %%*d :<%*d>\n", 5, 3);
//	printf(" %%-*d :<%-*d>\n", 5, 3);
//	printf("  %%*d :<%*d>\n", 5, 3);
//	printf(" %%*.d :<%*.d>\n", 5, 3);
//	printf("   %%d :<%d>\n", 5);
//    printf(" %%-5d :<%-5d>\n", 3);
//    printf(" %%-d :<%-d>\n", 3);


//	printf("%%-d      :<%-d>\n", 3);
//	printf("%%-0d :<%-0d>\n", 3, 5);
//	printf("%%0-d :<%0-d>\n", 3, 5);
//	printf("%%-*d     :<%-*d>\n", 3, 5);
//	printf("%%*-d :<%*-d>\n", 3);
//	printf("%%-5d     :<%-5d>\n", 3);
//	printf("%%-5.0d   :<%-5.0d>\n", 3);
  //  printf("%%-5.35d  :<%-5.35d>\n", 3);
    //printf("%%-36.35d :<%-36.35d>\n", 3);
//	printf("%%-0d :<%-0d>\n", 3, 5);
//	printf("%%5-d :<%5-d>\n", 3, 5);
//	printf("%%0-d :<%0-d>\n", 3, 5);

//cspdiuxX%

/*	int a = 3;

	printf("flag == -, all\n");
    printf("%%-c      :<%-c>\n", '3');
    printf("%%-s      :<%-s>\n", "3gdgs");
    printf("%%-p      :<%-p>\n", &a);
    printf("%%-d      :<%-d>\n", 3);
    printf("%%-i      :<%-i>\n", 3);
    printf("%%-u      :<%-u>\n", 3);
    printf("%%-x      :<%-x>\n", 3);
    printf("%%-X      :<%-X>\n", 3);

	printf("\n\nflag == -*, all\n");
    printf("%%-*c      :<%-*c>\n", 20, '3');
    printf("%%-*s      :<%-*s>\n", 20, "3gdgs");
    printf("%%-*p      :<%-*p>\n", 20, &a);
    printf("%%-*d      :<%-*d>\n", 20, 3);
    printf("%%-*i      :<%-*i>\n", 20, 3);
    printf("%%-*u      :<%-*u>\n", 20, 3);
    printf("%%-*x      :<%-*x>\n", 20, 3);
    printf("%%-*X      :<%-*X>\n", 20, 3);

	printf("\n\nflag == *, all\n");
    printf("%%*c      :<%*c>\n", 20, '3');
    printf("%%*s      :<%*s>\n", 20, "3gdgs");
    printf("%%*p      :<%*p>\n", 20, &a);
    printf("%%*d      :<%*d>\n", 20, 3);
    printf("%%*i      :<%*i>\n", 20, 3);
    printf("%%*u      :<%*u>\n", 20, 3);
    printf("%%*x      :<%*x>\n", 20, 3);
    printf("%%*X      :<%*X>\n", 20, 3);

	printf("\n\nflag == -20, all\n");
    printf("%%-20c      :<%-20c>\n", '3');
    printf("%%-20s      :<%-20s>\n", "3gdgs");
    printf("%%-20p      :<%-20p>\n", &a);
    printf("%%-20d      :<%-20d>\n", 3);
    printf("%%-20i      :<%-20i>\n", 3);
    printf("%%-20u      :<%-20u>\n", 3);
    printf("%%-20x      :<%-20x>\n", 3);
    printf("%%-20X      :<%-20X>\n", 3);

	printf("\n\nflag == -20.10, without p and c\n");
//    printf("%%-20.10c      :<%-20.10c>\n", '3');
    printf("%%-20.10s      :<%-20.10s>\n", "3gdgs");
//    printf("%%-20.10p      :<%-20.10p>\n", &a);
    printf("%%-20.10d      :<%-20.10d>\n", 3);
    printf("%%-20.10i      :<%-20.10i>\n", 3);
    printf("%%-20.10u      :<%-20.10u>\n", 3);
    printf("%%-20.10x      :<%-20.10x>\n", 3);
    printf("%%-20.10X      :<%-20.10X>\n", 3);

	printf("\n\nflag == -20., all\n");
    printf("%%-20.c      :<%-20.c>\n", '3');
    printf("%%-20.s      :<%-20.s>\n", "3gdgs");
    printf("%%-20.p      :<%-20.p>\n", &a);
    printf("%%-20.d      :<%-20.d>\n", 3);
    printf("%%-20.i      :<%-20.i>\n", 3);
    printf("%%-20.u      :<%-20.u>\n", 3);
    printf("%%-20.x      :<%-20.x>\n", 3);
	printf("%%-20.X      :<%-20.X>\n", 3);


	printf("\n\nflag == 0*, without c, s, p\n");
//    printf("%%*0c      :<%0*c>\n", '3');
//    printf("%%*0s      :<%0*s>\n", "3gdgs");
//    printf("%%*0p      :<%0*p>\n", &a);
    printf("%%0*d      :<%0*d>\n", 5, 3);
    printf("%%0*i      :<%0*i>\n", 5, 3);
    printf("%%0*u      :<%0*u>\n", 5, 3);
    printf("%%0*x      :<%0*x>\n", 5, 3);
    printf("%%0*X      :<%0*X>\n", 5, 3);

		printf("\n\nflag == -0*, all\n");
    printf("%%-0*c      :<%-20c>\n", '3');
    printf("%%-20s      :<%-20s>\n", "3gdgs");
    printf("%%-20p      :<%-20p>\n", &a);
    printf("%%-20d      :<%-20d>\n", 3);
    printf("%%-20i      :<%-20i>\n", 3);
    printf("%%-20u      :<%-20u>\n", 3);
    printf("%%-20x      :<%-20x>\n", 3);
    printf("%%-20X      :<%-20X>\n", 3);*/




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
