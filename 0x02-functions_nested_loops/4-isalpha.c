#include "main.h"

/**
 * _islower - cheeck if the character is lower
 * @c: the character
 * Return: 1 if character is lower
 */

int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
