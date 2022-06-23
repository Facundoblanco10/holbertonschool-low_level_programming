#include "main.h"
#include <stdlib.h>

/**
* _strdup - entry point
* @str: string
* Return: return NULL or a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
			s = malloc(i + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
