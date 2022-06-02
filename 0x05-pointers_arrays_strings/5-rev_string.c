#include "main.h"

/**
*rev_string - reverses string
*@s:string
*Return:void
*/

void rev_string(char *s)
{
int w, d;
char a[500];
w = 0;
d = 0;

	while (*(s + w))
	{
		*(a + w) = *(s + w);
		w++;
	}
	w = w - 1;
	while (w >= 0)
	{
		*(s + w) = *(a + d);
		d++;
		w--;
	}
}
