/**
 * main - check the code
 * @a: assign value
 * @b: assign value
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{
*a = 98;
*b = 42;
swap_int(&a, &b);
}
