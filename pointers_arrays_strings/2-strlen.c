#include "main.h"
#include <string.h>

/**
* _strlen - entry point
*
* @s: variable
*/

int _strlen(char *s)
{
	char i;
	int lenght = 0;
	while ( i != '\0'){
		lenght++;
		i = *(s + lenght);
	}
	return (lenght);
}
