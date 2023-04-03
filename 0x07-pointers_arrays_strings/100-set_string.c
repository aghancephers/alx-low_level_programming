#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @str_ptr: Pointer to a pointer to char
 * @target_str: Pointer to a char
 */
void set_string(char **str_ptr, char *target_str)
{
	*str_ptr = target_str;
}
