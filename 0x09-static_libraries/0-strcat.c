#include "main.h"

/**
  *_strcat - function used to concatenate two strings
  *@dest: destination
  *@src: source
  *
  *Return: final concatenated string
  */

char *_strcat(char *dest, char *src)
{
	int count1 = 0;
	int count2 = 0;

	/* gives the length of string dest */
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		/* count1 will start at the last value of string dest */
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}
