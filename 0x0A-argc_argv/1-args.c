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
	(void)argv;/* since i'm not using the argv parameter */

	printf("%d\n", (argc - 1));
	return (0);
}
