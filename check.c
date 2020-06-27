#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char a = '5';
	long long int  b = (long long int)&a;

	printf("%d\n", 11);
	printf("%%d\n");
	printf("%%%d\n", 11);
	printf("%%%%\n");
	printf("%p\n", &a);
	printf("%llx\n", b);
//	write(1, &b, 1);
	return 0;
}
