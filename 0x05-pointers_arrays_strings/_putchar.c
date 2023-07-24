#include <unistd.h> /* Include the necessary library for write function int*/

int _putchar(char c)
{
	return write(1, &c, 1); /*Use the write system call to print the character*/
}

