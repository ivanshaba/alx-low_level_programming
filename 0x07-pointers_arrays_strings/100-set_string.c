#include "main.h"

/**
 * set_string - This function sets the value of a pointer to a char.
 *
 * @str_ptr: Pointer to the pointer to be changed.
 *
 * @new_str: String to change pointer to.
 *
 * Return: void.
 */
void set_string(char **str_ptr, char *new_str)
{
	*str_ptr = new_str;
}
