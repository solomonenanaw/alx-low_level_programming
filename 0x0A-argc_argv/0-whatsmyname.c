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

	int i;



	for (i = 0; i < argc; i++)

	{

		printf("%s\n", argv[0]);

	}

	return (0);

}
