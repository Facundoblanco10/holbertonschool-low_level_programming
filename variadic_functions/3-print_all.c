#include "variadic_functions.h"

/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *arg;
	int tr = 1;

	va_start(ap, format);
	while (format != NULL && format[i])
	{
		tr = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				arg = va_arg(ap, char *);
				if (arg == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", arg);
				break;
			default:
				tr = 0;
				break;
		}
		if (format[i + 1] && tr == 1)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
