#include "main.h"

/**
* leet - 
*
*
*/

char *leet(char *l)
{
	int p = 0;
	int i;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (let[p])
	{
		i = 0;
		while (l[i])
		{
			if (l[i] == let[p])
			{
				l[i] = num[p];
				}
			i++;
		}
		p++;
	}
	return (l);
}
