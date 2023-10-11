#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer that prints a character.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);

}
