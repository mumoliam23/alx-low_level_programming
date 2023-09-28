#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Evaluates whether a string is a palindrome
 * @s: reverse string
 *
 * Return: 1 if it is, else 0
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - provides length of a string
 * @s: string whose length should be calculated
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - recursively checks characters for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, else 0
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
