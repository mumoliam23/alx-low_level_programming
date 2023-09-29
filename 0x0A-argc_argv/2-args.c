#include "main.h"
#include <stdio.h>
/**
 * main - Entry point to the program
 * @argc: Number of command line arguments
 * @argv: Array of strings that represent command line arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int i;
(void)argc;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
