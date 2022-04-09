#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints both small and capital letter
 *
 * Return: Always (Success)
 */
int main(void)
{
char i;
char I;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (I = 'A'; I <= 'Z'; I++)
{
putchar(I);
}
putchar('\n'); 

return (0);
}


