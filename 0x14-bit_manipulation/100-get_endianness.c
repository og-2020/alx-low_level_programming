#include "main.h"

/**
 * get_endianness - this checks if a machine is little or big endianness
 * Return: return 1 for little, 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
