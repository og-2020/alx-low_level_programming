#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: This is the character to print out
 *
 * Return: On success 1.
 * On error, return -1, error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
