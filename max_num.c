#include "libftprintf.h"

int			max_num(int num_1, int num_2)
{
	int		max;

	max = num_1;
	if (num_2 > max)
		max = num_2;
	return (max);
}
