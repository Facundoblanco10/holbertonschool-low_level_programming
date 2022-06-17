#include "main.h"

/**
* _strncpy - entry point
* @dest: destination
* @src: target to copy
* @n: variable
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] && src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

