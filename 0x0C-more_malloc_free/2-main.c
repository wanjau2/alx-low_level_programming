#include "main.h"
#include <stdlib.h>
int simple_print_buffer (char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i %10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[1]);
		i++;
	}
	printf("\n");
	return (0);
}
int main (void)
{
	char *a;
	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a + 4, " School! :)\n");
	a[97] = 'i';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
