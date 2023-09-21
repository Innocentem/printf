#include "main.h"

/*
 * ptts: prints string
 * @c: string to print
 * Return: number of bytes.
 */

int ptss(char *c)
{
	int count = 0;
	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			ptchr(c[count]);
		
		}
	
	}

return (count);
}
