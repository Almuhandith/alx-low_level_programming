#include "main.c"
/**
 * factorial - Returns the factorial of a given number
 * @n: given number
 * Return: factorial of the guven number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (1 * factorial(n-1));
}
