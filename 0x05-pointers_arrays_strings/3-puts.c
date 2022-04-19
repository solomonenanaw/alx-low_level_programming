#include <unistd.h>

/**
 * _putchar - writes the character
 * @c : the character to print
 *
 * Return: on succes one.
 * on error ,-1 is returned,  and error is there returned
 */

int _putchar(char *str)

{

	return (write(1, &c, 1));

}
