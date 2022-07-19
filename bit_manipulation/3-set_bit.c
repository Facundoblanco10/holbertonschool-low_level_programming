#include "main.h"

/**
* set_bit - set the value of a bit to 1 at given index
* @n: number
* @index: starting from 0
* Return: 1 if it worked or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1 << index;
	return (1);
}
