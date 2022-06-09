#include "main.h"

/**
* _islower - entry point
* @c: character
* Return: 1 (lowercase) 0 (if is not)
*/

int _islower(int c)
{
	if(c >= 97 && c <= 122) 
		return (1);
	else
		return (0);
}
