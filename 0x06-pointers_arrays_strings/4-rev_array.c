#include "main.h"

/**
 * reverse_array - func
 *
 * @a: pointer to char
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i, temp, *start, *end;

	start = a;
	end = a;

	for (i = 0; i < n - 1; i++)
	{
		end++;
	}

	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}

