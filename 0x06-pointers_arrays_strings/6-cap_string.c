#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int index = 0;
int capitalize_next = 1; /* Initialize to 1 to capitalize the first word*/

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
{
if (capitalize_next)
{
str[index] -= 32; /*Convert to uppercase*/
capitalize_next = 0; /* Reset the flag*/
}
}
else
{
capitalize_next = 1; /* Set the flag to capitalize the next word*/
}

index++;
}

return (str);
}
