#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first int
 * @b: second int
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
