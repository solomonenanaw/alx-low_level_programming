/**
 * swap_int - swaps the assigned value
 * @a:input parameter one
 * @b: input parameter two
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int z;

z = *a;
*a = *b;
*b = z;
}
