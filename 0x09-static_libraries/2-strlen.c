#include "main.h"

/**
  *_strlen - function that returns length of a string
  *@s: string
  *
  *Return: length of string without the null character
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
