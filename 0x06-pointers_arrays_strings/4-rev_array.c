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

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
			printf(", ");
	}
	printf("\n");
}
