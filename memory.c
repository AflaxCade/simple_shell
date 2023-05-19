#include "shell.h"

/**
 * bfree - Frees a pointer and sets the address to NULL
 * @ptr: Address of the pointer to be freed
 *
 * Description:
 * This function frees the memory allocated for a pointer and sets the address
 * to NULL. It takes the address of the pointer (ptr) as a parameter.
 *
 * Return:
 * Returns 1 if the pointer was successfully freed, otherwise returns 0.
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
