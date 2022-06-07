#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program will assign a random number
 * to the variable n each time it is executed
 * Return: Always 0.
*/
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("Last digit of %d", " is %d and is greater than 5");
	else if (lastdigit == 0)
		printf("Last digit of %d", "is %d and is 0");
	else if ((lastdigit < 6) && (lastdigit != 0))
		printf("Last digit of %d", "is %d and is less than 6 and not 0");
	return (0);
}
