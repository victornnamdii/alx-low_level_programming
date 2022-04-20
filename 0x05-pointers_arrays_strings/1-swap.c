#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: int type pointer
 * @b: int type pointer
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
