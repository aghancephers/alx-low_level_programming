#include <stdio.h>

/**
 * first - function that is called automatically
 * before main is executed
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	/* prints a message to the console */
	printf("You're beat! and yet, you must allow,\n");

	/* prints a second message to the console */
	printf("I bore my house upon my back!\n");
}
