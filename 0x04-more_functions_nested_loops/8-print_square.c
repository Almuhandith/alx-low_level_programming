#include "main.h"

/**
 * print_square - Draws a square in terminal
 *
 * @size: Size of the square
 *
 * Return: no return
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
