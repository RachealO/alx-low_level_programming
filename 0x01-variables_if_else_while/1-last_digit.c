#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int p;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p > 5)
{
	printf("Last digit of %d id %d and is greater than 5\n", n, p);
}
else if (l == 0)
{
	printf("Last digit of %d id %d and is 0\n", p);
}
else
{
	printf("Lat digit of %d id %d and less than 6 and not 0\n", p);
}
return (0);
}
