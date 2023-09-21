#include "main.h"

/**
 * ptchr: prints character
 * @c: character to be printed
 * Return: 1
 */

int ptchr(char c)
{
	return (write(1, &c, 1));

}
