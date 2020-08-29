#include "libftprintf.h"
#include <stdio.h>

int main()
{
	printf("<%d>\n", 0);
	ft_printf("<%d>\n\n", 0);

	printf("<%5d>\n", 0);
	ft_printf("<%5d>\n\n", 0);

	printf("<%5.d>\n", 0);
	ft_printf("<%5.d>\n\n", 0);

	printf("<%.0d>\n", 0);
	ft_printf("<%.0d>\n\n", 0);

/*	printf("<%-7.4s>\n", "yolo");
	ft_printf("<%-7.4s>\n\n", "yolo");

	printf("<%-10.8s>\n", NULL);
	ft_printf("<%-10.8s>\n\n", NULL);

	printf("<%-10.8s>\n", "hi low");
	ft_printf("<%-10.8s>\n\n", "hi low");
//0
	printf("1 - <%.*s>\n", -3, 0);
	ft_printf("1 - <%.*s>\n\n", -3, 0);

	printf("2 - <%.*s>\n", -1, 0);
	ft_printf("2 - <%.*s>\n\n", -1, 0);

    printf("3 - <%50.*s>\n", 0, 0);
    ft_printf("3 - <%50.*s>\n\n", 0, 0);

    printf("4 - <%.*s>\n", 0, 0);
    ft_printf("4 - <%.*s>\n\n", 0, 0);

    printf("5 - <%50.*s>\n", 3, 0);
    ft_printf("5 - <%50.*s>\n\n", 3, 0);

    printf("6 - <%.*s>\n", 1, 0);
    ft_printf("6 - <%.*s>\n\n", 1, 0);
    //NULL

    printf("1 - <%.*s>\n", -3, NULL);
    ft_printf("1 - <%.*s>\n\n", -3, NULL);

    printf("2 - <%.*s>\n", -1, NULL);
    ft_printf("2 - <%.*s>\n\n", -1, NULL);

    printf("3 - <%50.*s>\n", 0, NULL);
    ft_printf("3 - <%50.*s>\n\n", 0, NULL);

    printf("4 - <%.*s>\n", 0, NULL);
    ft_printf("4 - <%.*s>\n\n", 0, NULL);

    printf("5 - <%30.*s>\n", 7, NULL);
    ft_printf("5 - <%30.*s>\n\n", 7, NULL);

    printf("6 - <%.*s>\n", 1, NULL);
    ft_printf("6 - <%.*s>\n\n", 1, NULL);

    printf("7 - <%30.*s>\n", 40, NULL);
    ft_printf("7 - <%30.*s>\n\n", 40, NULL);*/

    printf("<%3d>\n", 0);
    ft_printf("<%3d>\n\n", 0);

    printf("<%.3d>\n", 0);
    ft_printf("<%.3d>\n\n", 0);

 //   printf("<%0-8.5d>\n", 34);
   // ft_printf("<%0-8.5d>\n\n", 34);

    printf("<%.*d>\n", -1, 0);
    ft_printf("<%.*d>\n", -1, 0);

    printf("<%.*d>\n", 0, 0);
    ft_printf("<%.*d>\n", 0, 0);

    printf("<%.*s>\n", -3, "hello");
    ft_printf("<%.*s>\n\n", -3, "hello");

    printf("<%-*.*s>\n", -7, -3, "yolo");
    ft_printf("<%-*.*s>\n", -7, -3, "yolo");

    printf("<%0*.*d>\n", 20, 0, -0);
    ft_printf("<%0*.*d>\n", 20, 0, -0);

 //   int aa = 0;
	char aa = '1';
    printf("<%c>, <%-c>, <%12c>, <%-3c>, <%-1c>, <%1c>, <%-2c>, <%-4c>, <%5c>, <%3c>, <%-*c>, <%-*c>, <%*c>, <%*c>\n", aa, aa, aa, aa, aa, aa, aa, aa, aa, aa, 12, aa, 12, aa, 12, aa, 12, aa);
    ft_printf("<%c>, <%-c>, <%12c>, <%-3c>, <%-1c>, <%1c>, <%-2c>, <%-4c>, <%5c>, <%3c>, <%-*c>, <%-*c>, <%*c>, <%*c>\n", aa, aa, aa, aa, aa, aa, aa, aa, aa, aa, 12, aa, 12, aa, 12, aa, 12, aa);

	return 0;
}
