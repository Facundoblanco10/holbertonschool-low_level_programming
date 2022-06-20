#include "main.h"

/**
* factorial - entry point
* @n: int
* Return: result, error or 1
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (factorial(n - 1) * n);
	}
	return (1);
}
