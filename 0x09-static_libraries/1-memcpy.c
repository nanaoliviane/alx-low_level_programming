#include "main.h"

/**
  *_memcpy - copies src to dest
  *@dest: destination
  *@src: source
  *@n: integer
  *
  *Return: destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
