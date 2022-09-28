#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: number  to calculate the prime
 * Return: 1 if the number is prime , 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calculate_prime(n, 2));
}
/**
 * calculate_prime - function that calculate the natural square root of
 * a number
 * @n: number to calculate prime
 * @iterator: initial number to test sqrt
 * Return: Value to sqrt
 */
int calculate_prime(int  n, int iterator)
{
	if (iterator < n)
	{
		if (n % iterator != 0)
		{
			calculate_prime(n, iterator + 1);
		} else
			return (0);
	}
	return (1);
}
