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
unsigned int i;
int sum;
va_list list;

va_start(list, n);
sum = 0;
for(i = 0; i < n; i++)
sum += va_arg(list, int);

va_end(list);
return (sum);
}
