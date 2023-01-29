#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Prints rabdom number either pos or neg
 *
 * Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
   printf("%i is positive\n", n);
else if (n == 0)
   printf("%i is zero\n", n);
else if (n < 0)
   printf("%i is negative\n", n);

return (0);
}
