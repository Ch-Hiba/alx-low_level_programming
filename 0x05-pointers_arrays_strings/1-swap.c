#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
