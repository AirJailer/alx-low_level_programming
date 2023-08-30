#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: given number
 * @othrn: another number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime -  checks if n is prime or not
 * @n: given number
 * @othrn: another number
 * Return: integer
*/

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}

