#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenate two strings
* @s1: string 1
* @s2: string 2
* Return: NULL on failure or a pointer pointing to a newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	char *ar;
	int c;

	len = s1 != NULL ? strlen(s1) : 0;
	len += s2 != NULL ? strlen(s2) : 0;
	ar = malloc(1 + len * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (len = 0; s1[len]; len++)
	{
		ar[len] = s1[len];
	}
	for (c = 0; s2[c]; len++, c++)
	{
		ar[len] = s2[c];
	}
	ar[len] = '\0';
	return (ar);
}
