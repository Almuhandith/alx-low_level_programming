#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int array[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int spell, size;

	size = sizeof(array) / sizeof(int);
	for (spell = 0; spell < size; spell++)
	{
		_putchar(array[spell]);
	}
	_putchar('\n');
	return (0);
}
