#include <stdlib.h>

#include <time.h>

/**
 * main -function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX /

if (n == 0)
	printf("6%d is zero\n", n)
else if (n  > 0)
	printf("%d is posetive\n", n)
else
	printf("%d is negative\n", n)
return (0);
}
