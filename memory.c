#include "shell.h"

/**
 * bfree - freees a poiinter and NULLLs the address
 * @ptr: address of the pointer to freee
 *
 * Return: 1 if freed, otherwiseee 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
