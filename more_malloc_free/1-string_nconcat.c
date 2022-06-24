#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concatenate two string
* @s1: string 1
* @s2: string 2
* @n: n bytes
* Return: a pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = 0;
	char *ar;
	unsigned int c;

	len = s1 != NULL ? strlen(s1) : 0;
	len += s2 != NULL ? strlen(s2) <= n ? n : strlen(s2) : 0;
	ar = malloc(1 + len * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (len = 0; s1 != NULL && s1[len]; len++)
	{
		ar[len] = s1[len];
	}
	for (c = 0; s2 != NULL && s2[c] && c < n; len++, c++)
	{
		ar[len] = s2[c];
	}
	ar[len] = '\0';
	return (ar);
}
