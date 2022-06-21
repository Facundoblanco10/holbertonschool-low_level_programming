#include "main.h"
#include <ctype.h>

/**
* _isdigit- entry point
* @c: character
* Return: 1 (uppercase) 0 (if is not)
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
