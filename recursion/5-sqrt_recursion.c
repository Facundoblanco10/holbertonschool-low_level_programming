#include "main.h"

/**
* iterador - entry point
* @n: number
* @i: sqrt
* Return: result
*/

int iterador(int n, int i)
{
	if (i <= n)
	{
		if (i * i == n)
		{
			return (i);
		}
		else if (i * i != n)
		{
			return (iterador(n, i + 1));
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
/**
* _sqrt_recursion - entry point
* @n: number
* Return: iterador
*/
int _sqrt_recursion(int n)
{
	return (iterador(n, 1));
}
