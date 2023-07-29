#include <stdio.h>
/**
 *  first - Declaring the prototype here and adding a compliler
 *  specific attribute
 *  __attribute__ ((constructor)). This attribute tell the compiler that
 *  the function should be executed before the main() function is
 *  invoked at the start of the program execution.
 *  __atribute__ - This is a GCC specific syntax to specify additional
 *  to function or variable
 *  ((constructor)) - this specify that the first function
 *  should be executed first at the start of the program before
 *  the main function.
 */
void first(void) __attribute__ ((constructor));

/**
 * first - a function that prints a sentence before
 * the main function is executed
 *
 */
void first(void)/*the function has no return*/
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
