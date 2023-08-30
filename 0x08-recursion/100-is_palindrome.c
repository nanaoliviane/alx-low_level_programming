#include "main.h"

/**
  *palind1 - gets length of i
  *@i: string
  *@l: integer to count length
  *
  *Return: answer
  */

int palind1(char *i, int l)
{
	if (i == 0)
		return (l - 1);
	return (palind1(i + 1, l + 1));
}
/**
  *palind2 - compares string vs string reverse
  *@i: string
  *@l: length
  *
  *Return: answer
  */

int palind2(char *i, int l)
{
	if (*i != *(i + l))
		return (0);
	else if (*i == 0)
		return (1);
	return (palind2(i + 1, l - 2));
}

/*
 * is_palindrome - gives a palindrome
 * @s: string to evaluate
 *
 *Return: answer
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
