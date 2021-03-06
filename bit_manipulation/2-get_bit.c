#include "main.h"

/**
* get_bit - return the value of a bit given index
* @n: number
* @index: starting from 0
* Return: the value of the bit at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n && i <= index)
	{
		if (i == index)
			return ((n & 1) + 0);
		n >>= 1;
		i++;
	}
	if (index > i && index < 64)
		return (0);
	return (-1);
}
