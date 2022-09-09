#include <stdio.h>

/**
 * main - Prints all single numbers in base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num[10] = "0123456789";

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
