#include "main.h"

/**
  *_strchr - gives a character in a string
  *@s: string
  *@c: character
  *Return: string
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
		return ('\0');
}
