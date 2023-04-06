#include "main.h"
/**
 * is_prime_number - Detects a prime number
 * @n: Number under test
 * Return: Final man on detection
 */
int is_prime_number(int n)
{
	return (prime_detect(n, (n / 2)));
}
/**
 * prime_detect - Detects prime and returns approrpiate value
 * @j: - Number under test
 * @m: - Half of the number of values under detection
 * Return: Returns 1 of true and 0 on fail
 */
int prime_detect(int j, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if ((j % m) == 0)
	{
		return (0);
	}
	return (prime_detect(j, (m - 1)));
}
