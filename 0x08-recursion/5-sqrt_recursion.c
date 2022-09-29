#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of the number
 * @n: the square root of n
 *
 * Return: the square root n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of the number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
