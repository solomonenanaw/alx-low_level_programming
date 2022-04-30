#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry ppoint
 * @argc: size of argv array
 * @argv: array of size argc
 * Return: Always 0 Sucess
 */
int main(int argc, char *argv[])
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return (0);
}
