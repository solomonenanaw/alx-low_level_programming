#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints base ten number
 *
 * Return: Always (Success)
 */
int main(void)

{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
