#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise returns 0.
 * @n: The input integer to check.
 *
 * Return: 1 if the input integer is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - Checks if the input integer is a prime number.
 * @n: The number to check.
 * @i: The current divisor to test.
 *
 * Return: 1 if the input integer is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
return (check_prime(n, i + 1));
}
