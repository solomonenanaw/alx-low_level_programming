#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: num of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: Always 0 Sucess
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
