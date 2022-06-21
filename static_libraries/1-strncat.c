#include "main.h"

/**
* _strncat - entry point
* @dest: variable
* @src: variable
* @n: variable
* Return: desti
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[length])
	{
		length++;
	}
	while (src[i] && i <= n - 1)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
