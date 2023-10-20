#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: The array
 * @n: The size of array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}


