#include "main.h"

/**
*swap_int - swaps intager
*@a: swaps with b
*@b: swaps with a
*/

void swap_int(int *a, int *b)
{
	int sa = *b;
	int sb = *a;
	*a = sa;
	*b = sb;
}
