#include "main.h"

/**
* _pow_recursion
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
	return (1);
}
