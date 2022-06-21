#include "main.h"
#include <ctype.h>

/**
* _isupper - entry point
* @c: character
* Return: 1 (uppercase) 0 (if is not)
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
