#include "main.h"

/**
* _strstr - entry point
* @haystack: pajar
* @needle: aguja
* Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int c = 0;
	int d = 0;

	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}
	while (haystack[c])
	{
		while (needle[d])
		{
			if (haystack[c + d] != needle[d])
			{
				break;
			}
			d++;
		}
		if (needle[d] == '\0')
		{
			return (haystack + c);
		}
		c++;
	}
	return ('\0');
}
