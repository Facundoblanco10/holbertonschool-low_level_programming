#include "main.h"

/**
* cap_string - entry point
* @t: variable
* Return: t
*/

char *cap_string(char *t)
{
	int i = 0;

	if (t[i] >= 97 && t[i] <= 122)
	t[i] -= 32;
	while (t[i])
	{
		if (t[i] >= 97 && t[i] <= 122)
		{
			i--;
			if (t[i] == ' ' || t[i] == '\t' || t[i] == '\n' || t[i] == ',' ||
				t[i] == ';' || t[i] == '.' || t[i] == '!' || t[i] == '?' ||
				t[i] == '"' || t[i] == '(' || t[i] == ')' || t[i] == '{' || t[i] == '}')
			{
				i++;
				t[i] -= 32;
			}
			else
			{
				i++;
			}
		}
		i++;
	}
		return (t);
}
