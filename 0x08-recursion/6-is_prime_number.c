#include "main.h"
int divisible(int n, int potent_diviseur);
/**
 * divisible - function declaration
 * @n: number to check
 * @potent_diviseur: the potent_diviseur
 * Return: 0 or 1
 */

int divisible(int n, int potent_diviseur)
{
	if (n % potent_diviseur == 0)
	{
		return (0);
	}
	else if (potent_diviseur == n / 2)
	{
		return (1);
	}
	else
	{
		return (divisible(n, potent_diviseur + 1));
	}
}

/**
 * is_prime_number - function definition
 * @n: the number to check
 * Return: 0 for not prime, 1 for prime
 */

int is_prime_number(int n)
{
	int potent_diviseur = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	else
	{
		return (divisible(n, potent_diviseur));
	}
}
