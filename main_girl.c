#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int				printf_ft(const char *str, ...);

int main()
{
	printf("\n--------------General check-------------\n");
	int a1, b1;
	a1 = printf("1 - Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n", "abra", 'e', 56, -43);
	b1 = ft_printf("1 - Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n", "abra", 'e', 56, -43);
	printf("%d %d\n", a1, b1);

	a1 = printf("2 - and now heximal: |%8x|, |%X|\n", 5554645, -123);
	b1 = ft_printf("2 - and now heximal: |%8x|, |%X|\n", 5554645, -123);
	printf("%d %d\n", a1, b1);

	char *ptr = NULL;
	a1 = printf("3 - |%p %s|\n", NULL, ptr);
	b1 = ft_printf("3 - |%p %s|\n", NULL, ptr);
 	printf("%d %d\n", a1, b1);

	printf("\n--------------Check for i-------------\n");
	a1 = printf("4 - |%i|\n",   10);
	b1 = ft_printf("4 - |%i|\n",  10);
    printf("%d %d\n", a1, b1);

	a1 = printf("5 - |%*.*i|\n", 8, 5, 15 );
	b1 = ft_printf("5 - |%*.*i|\n", 8, 5, 15 );
    printf("%d %d\n", a1, b1);

	a1 = printf("6 - |%*.*i|\n", 8, 5, 152352352 );
	b1 = ft_printf("6 - |%*.*i|\n", 8, 5, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("7 - |%0*i|\n", 18, 152352352 );
	b1 = ft_printf("7 - |%0*i|\n", 18, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("8 - |%*.*i|\n", 18, 10, 152352352 );
	b1 = ft_printf("8 - |%*.*i|\n", 18, 10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("9 - |%-*.*i|\n", 18, 10, 152352352 );
	b1 = ft_printf("9 - |%-*.*i|\n", 18, 10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("10 - |%*.*i|\n", 14, 15, -152352352 );
	b1 = ft_printf("10 - |%*.*i|\n", 14, 15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("11 - |%*.*i|\n", 18, 10, 152352352 );
	b1 = ft_printf("11 - |%*.*i|\n", 18, 10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("12 - |%*.*i|\n", 18, 15, -152352352 );
	b1 = ft_printf("12 - |%*.*i|\n", 18, 15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("13 - |%-*.*i|\n", 3, 15, -152352352 );
	b1 = ft_printf("13 - |%-*.*i|\n", 3, 15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("14 - |%0*.*i|\n", 18, 4, 152352352 );
	b1 = ft_printf("14 - |%0*.*i|\n", 18, 4, 152352352 );
    printf("%d %d\n", a1, b1);

	printf("\n--------------Check for negative width and accuracy: i-------------\n");
	a1 = printf("15 - |%-*.*i|\n", -10, -5, 10);
	b1 = ft_printf("15 - |%-*.*i|\n", -10, -5, 10);
    printf("%d %d\n", a1, b1);

	a1 = printf("16 - |%*.*i|\n", -8, -5, 15 );
	b1 = ft_printf("16 - |%*.*i|\n", -8, -5, 15 );
    printf("%d %d\n", a1, b1);

	a1 = printf("17 - |%*.*i|\n", -8, -5, 152352352 );
	b1 = ft_printf("17 - |%*.*i|\n", -8, -5, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("18 - |%0*i|\n", -18, 152352352 );
	b1 = ft_printf("18 - |%0*i|\n", -18, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("19 - |%*.*i|\n", -18, -10, 152352352 );
	b1 = ft_printf("19 - |%*.*i|\n", -18, -10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("20 - |%-*.*i|\n", -18, -10, 152352352 );
	b1 = ft_printf("20 - |%-*.*i|\n", -18, -10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("21 - |%*.*i|\n", -18, -15, -152352352 );
	b1 = ft_printf("21 - |%*.*i|\n", -18, -15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("22 - |%*.*i|\n", -18, 10, 152352352 );
	b1 = ft_printf("22 - |%*.*i|\n", -18, 10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("23 - |%*.*i|\n", 18, -15, -152352352 );
	b1 = ft_printf("23 - |%*.*i|\n", 18, -15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("24 - |%-*.*i|\n", -3, -15, -152352352 );
	b1 = ft_printf("24 - |%-*.*i|\n", -3, -15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("25 - |%0*.*i|\n", -18, -4, 152352352 );
	b1 = ft_printf("25 - |%0*.*i|\n", -18, -4, 152352352 );
    printf("%d %d\n", a1, b1);

	printf("\n--------------Check for d-------------\n");
	a1 = printf("26 - |%-*.*d|\n", 10, 5, 10);
	b1 = ft_printf("26 - |%-*.*d|\n", 10, 5, 10);
    printf("%d %d\n", a1, b1);

	a1 = printf("27 - |%*.*d|\n", 8, 5, 15 );
	b1 = ft_printf("27 - |%*.*d|\n", 8, 5, 15 );
    printf("%d %d\n", a1, b1);

	a1 = printf("28 - |%*.*d|\n", 8, 5, 152352352 );
	b1 = ft_printf("28 - |%*.*d|\n", 8, 5, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("29 - |%0*d|\n", 18, 152352352 );
	b1 = ft_printf("29 - |%0*d|\n", 18, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("30 - |%*.*d|\n", 18, 10, 152352352 );
	b1 = ft_printf("30 - |%*.*d|\n", 18, 10, 152352352 );
    printf("%d %d\n", a1, b1);

    a1 = printf("31 - |%-*.*d|\n", 18, 10, 152352352 );
	b1 = ft_printf("31 - |%-*.*d|\n", 18, 10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("32 - |%*.*d|\n", 18, 15, -152352352 );
	b1 = ft_printf("32 - |%*.*d|\n", 18, 15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("33 - |%*.*d|\n", 18, 10, 152352352 );
	b1 = ft_printf("33 - |%*.*d|\n", 18, 10, 152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("34 - |%*.*d|\n", 18, 15, -152352352 );
	b1 = ft_printf("34 - |%*.*d|\n", 18, 15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("35 - |%-*.*d|\n", 3, 15, -152352352 );
	b1 = ft_printf("35 - |%-*.*d|\n", 3, 15, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("36 - |%-*.*d|\n", 15, 3, -152352352 );
	b1 = ft_printf("36 - |%-*.*d|\n", 15, 3, -152352352 );
    printf("%d %d\n", a1, b1);

	a1 = printf("37 - |%0*.*d|\n", 18, 4, 152352352 );
	b1 = ft_printf("37 - |%0*.*d|\n", 18, 4, 152352352 );
    printf("%d %d\n", a1, b1);

	printf("\n--------------Check for s-------------\n");
	a1 = printf("38 - |%8s|\n", "abra");
	b1 = ft_printf("38 - |%8s|\n", "abra");
    printf("%d %d\n", a1, b1);

	a1 = printf("39 - |%-8s|\n", "abrafdefgbr");
	b1 = ft_printf("39 - |%-8s|\n", "abrafdefgbr");
    printf("%d %d\n", a1, b1);

	a1 = printf("40 - |%8s|\n", "abra");
	b1 = ft_printf("40 - |%8s|\n", "abra");
    printf("%d %d\n", a1, b1);

	a1 = printf("41 - |%8s|\n", "abrafdefgbr");
	b1 = ft_printf("41 - |%8s|\n", "abrafdefgbr");
    printf("%d %d\n", a1, b1);

	a1 = printf("42 - |%*.*s|\n", 20, 5, "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("42 - |%*.*s|\n", 20, 5,  "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("43 - |%-*.*s|\n", 20, 5, "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("43 - |%-*.*s|\n", 20, 5, "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("44 - |%.*s|\n",  5, "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("44 - |%.*s|\n",  5, "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("45 - |%*.s|\n", 20, "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("45 - |%*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("46 - |%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("46 - |%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("47 - |%.s|\n",  "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("47 - |%.s|\n",  "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("48 - |%*s|\n",  40, "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("48 - |%*s|\n",  40, "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("49 - |%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("49 - |%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("50 - |%-*.0s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("50 - |%-*.0s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("51 - |%*.1s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("51 - |%*.1s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

	a1 = printf("52 - |%-*.*s|\n", 2, 20, "1234567890123fsfbdfbdfvbbdvbvb");
	b1 = ft_printf("52 - |%-*.*s|\n", 2, 20, "1234567890123fsfbdfbdfvbbdvbvb");
    printf("%d %d\n", a1, b1);

printf("\n--------------Check for %%-------------\n");
	a1 = printf("53 - |%5%|\n");
	b1 = ft_printf("53 - |%5%|\n");
    printf("%d %d\n", a1, b1);

	a1 = printf("54 - |%5.%|\n");
	b1 = ft_printf("54 - |%5.%|\n");
    printf("%d %d\n", a1, b1);

	a1 = printf("55 - |%-5%|\n");
	b1 = ft_printf("55 - |%-5%|\n");
    printf("%d %d\n", a1, b1);

	a1 = printf("56 - |%-5.%|\n");
	b1 = ft_printf("56 - |%-5.%|\n");
    printf("%d %d\n", a1, b1);

	a1 = printf("57 - |%*.*%|\n", 12, 15);
	b1 = ft_printf("57 - |%*.*%|\n", 12, 15);
    printf("%d %d\n", a1, b1);

	a1 = printf("58 - |%*.%|\n", 12);
	b1 = ft_printf("58 - |%*.%|\n", 12);
    printf("%d %d\n", a1, b1);

	a1 = printf("59 - |%0.*%|\n", 12);
	b1 = ft_printf("59 - |%0.*%|\n", 12);
    printf("%d %d\n", a1, b1);

	a1 = printf("60 - |%0*%|\n", 12);
	b1 = ft_printf("60 - |%0*%|\n", 12);
    printf("%d %d\n", a1, b1);

	a1 = printf("61 - |%0*.*%|\n", 12, 5);
	b1 = ft_printf("61 - |%0*.*%|\n", 12, 5);
    printf("%d %d\n", a1, b1);

	a1 = printf("62 - |%0*.*%|\n", 12, 15);
	b1 = ft_printf("62 - |%0*.*%|\n", 12, 15);
    printf("%d %d\n", a1, b1);

	a1 = printf("63 - |%0*.*%|\n", 12, 1);
	b1 = ft_printf("63 - |%0*.*%|\n", 12, 1);
    printf("%d %d\n", a1, b1);

	a1 = printf("64 - |%0*.*%|\n", 1, 5);
	b1 = ft_printf("64 - |%0*.*%|\n", 1, 5);
    printf("%d %d\n", a1, b1);

	a1 = printf("65 - |%0*.*%|\n", 1, 1);
	b1 = ft_printf("65 - |%0*.*%|\n", 1, 1);
    printf("%d %d\n", a1, b1);

	a1 = printf("66 - |%0*.*%|\n", 12, 0);
	b1 = ft_printf("66 - |%0*.*%|\n", 12, 0);
    printf("%d %d\n", a1, b1);

	a1 = printf("67 - |%0*.*%|\n", 0, 10);
	b1 = ft_printf("67 - |%0*.*%|\n", 0, 10);
    printf("%d %d\n", a1, b1);

	a1 = printf("68 - |%0*.*%|\n", 0, 0);
	b1 = ft_printf("68 - |%0*.*%|\n", 0, 0);
    printf("%d %d\n", a1, b1);

	a1 = printf("69 - |%*.*%|\n", -12, -15);
	b1 = ft_printf("69 - |%*.*%|\n", -12, -15);
    printf("%d %d\n", a1, b1);

	a1 = printf("70 - |%*.*%|\n", 12, -15);
	b1 = ft_printf("70 - |%*.*%|\n", 12, -15);
    printf("%d %d\n", a1, b1);

	a1 = printf("71 - |%*.%|\n", -12);
	b1 = ft_printf("71 - |%*.%|\n", -12);
    printf("%d %d\n", a1, b1);

	a1 = printf("72 - |%0.*%|\n", -12);
	b1 = ft_printf("72 - |%0.*%|\n", -12);
    printf("%d %d\n", a1, b1);

	a1 = printf("73 - |%0*%|\n", -12);
	b1 = ft_printf("73 - |%0*%|\n", -12);
    printf("%d %d\n", a1, b1);

	a1 = printf("74 - |%0*.*%|\n", -12, -5);
	b1 = ft_printf("74 - |%0*.*%|\n", -12, -5);
    printf("%d %d\n", a1, b1);

	a1 = printf("75 - |%0*.*%|\n", -12, -15);
	b1 = ft_printf("75 - |%0*.*%|\n", -12, -15);
    printf("%d %d\n", a1, b1);

	a1 = printf("76 - |%0*.*%|\n", -12, -1);
	b1 = ft_printf("76 - |%0*.*%|\n", -12, -1);
    printf("%d %d\n", a1, b1);

	a1 = printf("77 - |%0*.*%|\n", -1, -5);
	b1 = ft_printf("77 - |%0*.*%|\n", -1, -5);
    printf("%d %d\n", a1, b1);

	a1 = printf("78 - |%0*.*%|\n", -1, -1);
	b1 = ft_printf("78 - |%0*.*%|\n", -1, -1);
    printf("%d %d\n", a1, b1);

	a1 = printf("79 - |%0*.*%|\n", -12, 0);
	b1 = ft_printf("79 - |%0*.*%|\n", -12, 0);
    printf("%d %d\n", a1, b1);

	a1 = printf("80 - |%0*.*%|\n", 0, -10);
	b1 = ft_printf("80 - |%0*.*%|\n", 0, -10);
    printf("%d %d\n", a1, b1);

	a1 = printf("81 - |%0*.*%|\n", 0, 0);
	b1 = ft_printf("81 - |%0*.*%|\n", 0, 0);
    printf("%d %d\n", a1, b1);

	a1 = printf("82 - |%-05%|\n");
	b1 = ft_printf("82 - |%-05%|\n");
    printf("%d %d\n", a1, b1);

	a1 = printf("83 - |%20% this is good|\n");
	b1 = ft_printf("83 - |%20% this is good|\n");
	printf("%d %d\n", a1, b1);

	a1 = printf("84 - |%020% this is good|\n");
	b1 = ft_printf("84 - |%020% this is good|\n");
	printf("%d %d\n", a1, b1);
    return (0);
}
