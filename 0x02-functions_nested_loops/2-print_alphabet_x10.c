#include "main.h"

/**
 * print_alphabet_x10 - prints teen times alphabet
 */
void print_alphabet_x10(void)
{
int counter = 0;
char letter;
while (counter++ <= 9)
{
for (letter = 'a' ; letter <= 'z' ; letter++)
_putchar(letter);
_putchar('\n');
}
}
