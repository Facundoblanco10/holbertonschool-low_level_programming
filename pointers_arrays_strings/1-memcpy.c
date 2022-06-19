#include "main.h"

/**
* _memcpy - entry point
* @dest: destino
* @src: copy
* @n: n times
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
