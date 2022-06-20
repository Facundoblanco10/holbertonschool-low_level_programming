#include "main.h"

/**
* _pow_recursion - entry point
* @x: base
* @y: exponent
* Return: result
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (1);
}
