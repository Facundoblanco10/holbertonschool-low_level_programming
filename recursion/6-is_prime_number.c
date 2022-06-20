#include "main.h"

/**
* iterador - iterador
* @n: number
* @i: divisor
* Return: 1 or 0
*/

int iterador(int n, int i)
{
	if (i < n)
	{
		if (n % i != 0)
		{
			return (iterador(n, i + 1));
		}
		else if (n % i == 0)
		{
			return (0);
		}
	}
	else if (n == i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
/**
* is_prime_number - entry point
* @n: number
* Return: iterador
*/
int is_prime_number(int n)
{
	return (iterador(n, 2));
}
