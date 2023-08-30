#include "main.h"

/**
  *sqrt2 - checks the square root
  *@i: integer
  *@j: integer
  *
  *Return: square root
  */

int sqrt2(int i, int j)
{
	int s;

	s = j * j
		;
	if (s > i)
		return (-1);
	if (s == i)
		return (j);
	return (sqrt2(i, j + 1));
}

/**
  *_sqrt_recursion - finds the square root
  *@n: integer to find the square root
  *
  *Return: square root
  */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
