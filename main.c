#include <stdio.h>
#include "libftprintf.h"


int main()
{
/*    int a = 5;
    int a1, b1;


    a1 = printf("%p\n", "5");
	b1 = ft_printf("%p\n", "5");
	printf("%d %d\n", a1, b1);
    a1 = printf("%p\n", &a);
    b1 = ft_printf("%p\n", &a);
    printf("%d %d\n", a1, b1);

    int     c = -122;

	printf("%d\n", printf("sveta - %c, %s, %d, %i, %x, %X, %p, %u\n", 'a', "sveta", 55, 44, 122, 122, &c, 1));
	printf("%d\n", ft_printf("sveta - %c, %s, %d, %i, %x, %X, %p, %u\n", 'a', "sveta", 55, 44, 122, 122, &c, 1));

    printf("%u\n", -2147483648);
    ft_printf("%u\n", -2147483648);

    printf("0.5i :<%0.5i>\n", -22);
    ft_printf("0.5i :<%0.5i>\n", -22);

    printf("0.5i :<%0.5i>\n", 22);
    ft_printf("0.5i :<%0.5i>\n", 22);

    printf("0.0i :<%0.0i>\n", -22);
    ft_printf("0.0i :<%0.0i>\n", -22);

	printf("0.0i :<%0.0i>\n", 22);
    ft_printf("0.0i :<%0.0i>\n", 22);

    printf("5i :<%5i>\n", -22);
    ft_printf("5i :<%5i>\n", -22);

    printf("5.0i :<%5.0i>\n", -22);
    ft_printf("5.0i :<%5.0i>\n", -22);

    printf("5.5i :<%5.5i>\n", -22);
    ft_printf("5.5i :<%5.5i>\n", -22);

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
    printf("%%-20X      :<%-20X>\n", 3);
	printf("%d\n", printf("*(20)c  <%*c>\n", 20, 'c'));
    printf("%d\n", ft_printf("*(20)c  <%*c>\n", 20, 'c'));

	printf("%d\n", printf("-*(20)c <%-*c>\n", 20, 'c'));
    printf("%d\n", ft_printf("-*(20)c <%-*c>\n", 20, 'c'));

	printf("%d\n", printf("-20c    <%-20c>\n", 'c'));
    printf("%d\n", ft_printf("-20c    <%-20c>\n", 'c'));

	printf("%d\n", printf("-20.c   <%-20.c>\n", 'c'));
    printf("%d\n", ft_printf("-20.c   <%-20.c>\n", 'c'));

	printf("%d\n", printf("-*(20).c<%-*.c>\n", 20, 'c'));
    printf("%d\n", ft_printf("-*(20).c<%-*.c>\n", 20, 'c'));

	printf("%d\n", printf("- <%-*.c>\n", 20, 'c'));
	printf("%d\n", ft_printf("- <%-*.c>\n", 20, 'c'));


	printf("31.21i  <%31.21i>\n", 55);
	printf("21.31i  <%21.31i>\n\n", 55);

	
	printf("-31.21i <%-31.21i>\n", 55);
	printf("-21.31i <%-21.31i>\n\n", 55);


	printf("-21.21i <%-21.21i>\n\n", 55);
	

	printf("031.21i <%031.21i>\n", 55);
	printf("021.31i <%021.31i>\n", 55);


	printf("21.0i    <%21.0i>\n", 55);
	printf("0.31i    <%0.31i>\n", 55);


	printf("-21.0i    <%-21.0i>\n", 55);
	printf("-0.31i    <%-.31i>\n", 55);


	printf("-21.1i    <%-21.1i>\n", 55);
	printf("-21.2i    <%-21.2i>\n", 55);
	printf("-21.3i    <%-21.3i>\n", 55);*/

/*	int a = 5;
	printf("<%d>\n", 1000000000);
	printf("<%*.*i>\n", -10, -20, 10000000);
	printf("<%-.*i>\n", -10, 10000000);*/


/*	printf("fill me <%*.*d>\n", -5, -20, -1);
	printf("fill me <%-*.*d>\n", 10, 20, -1);

	printf("\nfill me <%*.*d>\n", 10, 20, -1);
	printf("fill me <%*.*d>\n", 20, 10, -1);

	printf("\nfill me <%*.*d>\n", -20, 10, -1);
	printf("fill me <%*.*d>\n", 20, -10, -1);
	printf("fill me <%*.*d>\n", -20, -10, -1);

	printf("\nfill me <%*.*d>\n", -10, 20, -1);
	printf("fill me <%*.*d>\n", 10, -20, -1);
	printf("fill me <%*.*d>\n", -10, -20, -1);

	printf("\nfill me <%*.*d>\n", -5, 8, -123456789);
	printf("fill me <%*.*d>\n", 5, -8, -123456789);
	printf("fill me <%*.*d>\n", -5, -8, -123456789);


	printf("\nfill me <%*.*d>\n", -8, 5, -123456789);
	printf("fill me <%*.*d>\n", 8, -5, -123456789);
	printf("fill me <%*.*d>\n", -8, -5, -123456789);*/
/*	printf("<%*.p>\n", 20, &a);
//	printf("<%-.*i>\n", -10, 10000000);
//	printf("<%-.*i>\n", -10, 10000000);

	printf("<%*.*s>\n", 10, 20, "qwerty");
	printf("<%*.*s>\n", 20, 10, "qwerty");
	printf("<%*.*s>\n", -10, -20, "qwerty");
	printf("<%*.*s>\n", -20, -10, "qwerty");
	printf("<%*.*s>\n", -10, 20, "qwerty");
	printf("<%*.*s>\n", -20, 20, "qwerty");
	printf("<%*.*s>\n", 10, -20, "qwerty");
	printf("<%*.*s>\n", 20, -10, "qwerty");*/



    int a = 4;
	printf("<%*.*d>\n", 15, a, -555);
    ft_printf("<%*.*d>\n", 15, a, -555);
	printf("<%-*.*d>\n", 15, a, -555);
    ft_printf("<%-*.*d>\n", 15, a, -555);
	printf("<%*.*d>\n", 15, a, 555);
    ft_printf("<%*.*d>\n", 15, a, 555);
	printf("<%-*.*d>\n", 15, a, 555);
    ft_printf("<%-*.*d>\n\n", 15, a, 555);


    int g = -1;
    int gg = -13;
    printf("<%*d>\n", -15, -555);
    ft_printf("<%*d>\n", -15, -555);
    printf("<%-*d>\n", -15, -555);
    ft_printf("<%-*d>\n", -15, -555);
    printf("<%*.*d>\n", g, gg, 555);
    ft_printf("<%*.*d>\n", g, gg, 555);
    printf("<%-*.*d>\n", g, gg, 555);
    ft_printf("<%-*.*d>\n\n", g, gg, 555);


    int b = 100;
    printf("<%-*.*d>\n", 15, b, 555);
    ft_printf("<%-*.*d>\n\n", 15, b, 555);

    printf("<%-*.*d>\n", 15, b, -555);
    ft_printf("<%-*.*d>\n\n", 15, b, -555);



    int c = 1;
    printf("\n<%0*d>\n", c, -555);
    ft_printf("<%0*d>\n", c, -555);
    printf("\n<%0*d>\n", c, 555);
    ft_printf("<%0*d>\n", c, 555);

    printf("\n<%0*.d>\n", c, -555);
    ft_printf("<%0*.d>\n", c, -555);
    printf("\n<%0*.d>\n", c, 555);
    ft_printf("<%0*.d>\n", c, 555);


    printf("-----s-----\n\n");
//    int d = 5;

    printf("<%s>\n", "qwerty");
    ft_printf("<%s>\n\n", "qwerty");

    printf("<%.s>\n", "qwerty");
    ft_printf("<%.s>\n\n", "qwerty");

    printf("<%7.10s>\n", "qwerty12345");
    ft_printf("<%7.10s>\n\n", "qwerty12345");

    printf("<%5.s>\n", "qwerty");
    ft_printf("<%5.s>\n\n", "qwerty");

    printf("<%.10s>\n", "qwerty");
    ft_printf("<%.10s>\n\n", "qwerty");

    printf("<%-5.s>\n", "qwerty");
    ft_printf("<%-5.s>\n\n", "qwerty");

    printf("<%-.10s>\n", "qwerty");
    ft_printf("<%-.10s>\n\n", "qwerty");

    printf("<%*.*s>\n", -5, -10, "qwerty");
    ft_printf("<%*.*s>\n\n", -5, -10, "qwerty");

    printf("<%*.*s>\n", -5, 10, "qwerty");
    ft_printf("<%*.*s>\n\n", -5, 10, "qwerty");

    printf("-------%%-------\n");

    printf ("1 - <%%>\n");
    ft_printf ("1 - <%%>\n\n");

    printf ("2 - <%.%>\n");
    ft_printf ("2 - <%.%>\n\n");

    printf ("3 - <%5.%>\n");
    ft_printf ("3 - <%5.%>\n\n");

    printf ("4 - <%-%>\n");
    ft_printf ("4 - <%-%>\n\n");

    printf ("5 - <%-.%>\n");
    ft_printf ("5 - <%-.%>\n\n");

    printf ("6 - <%-5.%>\n");
    ft_printf ("6 - <%-5.%>\n\n");

    printf ("7 - <%-5.4%>\n");
    ft_printf ("7 - <%-5.4%>\n\n");

    printf ("8 - <%-5.10%>\n");
    ft_printf ("8 - <%-5.10%>\n\n");

    printf ("9 - <%5.10%>\n");
    ft_printf ("9 - <%5.10%>\n\n");

    printf ("10 - <%-*.*%>\n", 5, 10);
    ft_printf ("10 - <%-*.*%>\n\n", 5, 10);

    printf ("11 - <%*.*%>\n", 5, 10);
    ft_printf ("11 - <%*.*%>\n\n", 5, 10);

    printf ("12 - <%-*.*%>\n", 10, 5);
    ft_printf ("12 - <%-*.*%>\n\n", 10, 5);

    printf ("13 - <%*.*%>\n", 10, 5);
    ft_printf ("13 - <%*.*%>\n\n", 10, 5);

    printf ("14 - <%-*.*%>\n", -10, 5);
    ft_printf ("14 - <%-*.*%>\n\n", -10, 5);

    printf ("15 - <%*.*%>\n", -10, 5);
    ft_printf ("15 - <%*.*%>\n\n", -10, 5);

    printf ("16 - <%-*.*%>\n", 10, -5);
    ft_printf ("16 - <%-*.*%>\n\n", 10, -5);

    printf ("17 - <%*.*%>\n", 10, -5);
    ft_printf ("17 - <%*.*%>\n\n", 10, -5);

    printf ("18 - <%-*.*%>\n", -10, -5);
    ft_printf ("18 - <%-*.*%>\n\n", -10, -5);

    printf ("19 - <%*.*%>\n", -10, -5);
    ft_printf ("19 - <%*.*%>\n\n", -10, -5);

    printf ("20 - <%-.*%>\n", 10);
    ft_printf ("20 - <%-.*%>\n\n", 10);

    printf ("21 - <%*.%>\n", 10);
    ft_printf ("21 - <%*.%>\n\n", 10);


	printf("<%*.*d>\n", 5, 5, 5);
    ft_printf("<%*.*d>\n", 5, 5, 5);
	printf("<%*.*d>\n", 4, 5, 5);
    ft_printf("<%*.*d>\n", 4, 5, 5);
	printf("<%*.*d>\n", 5, 4, 5);
    ft_printf("<%*.*d>\n", 5, 4, 5);

    printf("----------c-----------\n\n");
	printf("1 - <%c>\n", 'c');
    ft_printf("1 - <%c>\n\n", 'c');

    printf("2 - <%.c>\n", 'c');
    ft_printf("2 - <%.c>\n\n", 'c');

    printf("3 - <%-.c>\n", 'c');
    ft_printf("3 - <%-.c>\n\n", 'c');

    printf("4 - <%-5.c>\n", 'c');
    ft_printf("4 - <%-5.c>\n\n", 'c');

    printf("5 - <%5.c>\n", 'c');
    ft_printf("5 - <%5.c>\n\n", 'c');

    printf("6 - <%-*.c>\n", 5, 'c');
    ft_printf("6 - <%-*.c>\n\n", 5, 'c');

    printf("7 - <%*.c>\n", 5, 'c');
    ft_printf("7 - <%*.c>\n\n", 5, 'c');

    printf("8 - <%-*.c>\n", -5, 'c');
    ft_printf("8 - <%-*.c>\n\n", -5, 'c');

    printf("9 - <%*.c>\n", -5, 'c');
    ft_printf("9 - <%*.c>\n\n", -5, 'c');

    printf("8.1 - <%-*c>\n", -5, 'c');
    ft_printf("8.1 - <%-*c>\n\n", -5, 'c');

    printf("9.1 - <%*c>\n", -5, 'c');
    ft_printf("9.1 - <%*c>\n\n", -5, 'c');

    printf("10 - <%*.c>\n", 0, 'c');
    ft_printf("10 - <%*.c>\n\n", 0, 'c');

    printf("11 - <%-*.c>\n", 0, 'c');
    ft_printf("11 - <%-*.c>\n\n", 0, 'c');

    printf("12 - <%*c>\n", 0, 'c');
    ft_printf("12 - <%*c>\n\n", 0, 'c');

    printf("13 - <%-*c>\n", 0, 'c');
    ft_printf("13 - <%-*c>\n\n", 0, 'c');



    printf("<%*.*s>\n", 6, 2, "TEST");
    ft_printf("<%*.*s>\n", 6, 2, "TEST");

    printf("<%*.*s>\n", 6, 2, "TEST");
    ft_printf("<%*.*s>\n", 6, 2, "TEST");

    printf("<%30.20s>\n", "qwertyuiop");
    ft_printf("<%30.20s>\n", "qwertyuiop");
    printf("<%9.5s>\n", "qwertyuiop");
    ft_printf("<%9.5s>\n", "qwertyuiop");

    printf("<%30.20s>\n", "abc1234567890123456789012");
    ft_printf("<%30.20s>\n", "abc1234567890123456789012");


	printf("<%7.0d>\n", 0);
	ft_printf("<%7.0d>\n", 0);
	printf("<%7.0d>\n", 1);
	ft_printf("<%7.0d>\n", 1);
	printf("<%7.0s>\n", "");
	ft_printf("<%7.0s>\n", "");


	printf("<%0*.*i>\n", 0, -2, 8);
    ft_printf("<%0*.*i>\n", 0, -2, 8);

    printf("<%0*.*i>\n", 2, -1, 8);
    ft_printf("<%0*.*i>\n", 2, -1, 8);

    printf("<%0*.*u>, <%0*.*x>, <%0*.*X>\n", 2, -1, 0, 2, -1, 0, 2, -1, 0);
    ft_printf("<%0*.*u>, <%0*.*x>, <%0*.*X>\n", 2, -1, 0, 2, -1, 0, 2, -1, 0);

    printf("<%0*.*d>\n", 4, -2, -12);
    ft_printf("<%0*.*d>\n", 4, -2, -12);
    return 0;
}
