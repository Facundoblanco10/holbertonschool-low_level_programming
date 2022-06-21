#include "main.h"

/**
* _strchr - entry point
* @s: string
* @c: character c
* Return: s if is found or 0 if is not
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return ('\0');
	}
}
