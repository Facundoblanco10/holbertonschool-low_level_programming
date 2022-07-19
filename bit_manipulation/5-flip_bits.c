#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip to
* get from one number to another.
* @n: number
* @m: number
* Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;

	if (n > 1 || m > 1)
		res = flip_bits(n >> 1, m >> 1);
	if ((n & 1) != (m & 1))
		res += 1;
	return (res);
}
