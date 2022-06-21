#include "main.h"

/**
* _strcat - entry point
* @dest: variable
* @src: variable
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (dest[length])
	{
		length++;
	}
	while (src[i])
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
