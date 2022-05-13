#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
int sum;
sum = 0;
unsigned int i;
va_list ptr;
Va_start(ptr, n)
for (i = 0; i < n; i++)
sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}

