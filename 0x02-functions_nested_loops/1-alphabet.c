#include"main.h"
/**
 * main - entry
 * description - prints alphabet
 * return - success
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
_putchar(letter);
_putchar('\n');
return (0);
}

