#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates all the arguments
  *@ac: argument count
  *@av: argument vector
  *
  *Return: pointer to string or NULL upon failure
  */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * ac);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ptr[i] = av[i];
	}
	return (ptr);
}
