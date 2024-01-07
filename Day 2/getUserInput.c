#include "todo.h"
/**
 * getUserInput - Get user input from stdin
 * @input: Pointer to input buffer
 * @size: Size of input buffer
 */
void getUserInput(char *input, size_t size)
{
	getchar();
	fgets(input, size, stdin);
	input[strcspn(input, "\n")] = '\0';
}
