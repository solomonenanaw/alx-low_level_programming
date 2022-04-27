#include "main.h"
#include <math.h>
/**
 * _pow_recursion - function returns rased power
 * @x: vaue
 * @y: value
 * Return: value of exponent
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
return (_pow_recursion(x, y);
}
