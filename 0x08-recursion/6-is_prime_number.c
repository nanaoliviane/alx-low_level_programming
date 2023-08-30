#include "main.h"

/**
  *prime1 - checks the function
  *@i: integer
  *@j: integer
  *
  *Return: prime
  */

int prime1(int i, int j)
{
	if (j == i)
		return (1);
	else if (j % i == 0)
		return (0);
	return (prime1(i + 1, j));
}

/**
  *is_prime_number - checks if the number is prime
  *@n: integer
  *
  *Return: answer
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(2, n));
}
