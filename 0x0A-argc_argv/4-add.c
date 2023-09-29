#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point to the program
 * @argc: Number of command line arguments
 * @argv: Array of strings that represent command line arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int num, i, j;
int result = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]) && argv[i][j] != '-')
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
if (num > 0)
{
result += num;
}
}
printf("%d\n", result);
return (0);
}
