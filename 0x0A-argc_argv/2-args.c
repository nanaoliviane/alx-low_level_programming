#include "main.h"

/**
  * main - entry point
  *@argc: argument count
  *@argv: argument array or vector
  *
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
