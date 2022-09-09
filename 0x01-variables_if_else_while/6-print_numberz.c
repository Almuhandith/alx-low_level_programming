#include <stdio.h>

/**
 * main - Print first 10 numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
