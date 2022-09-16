#include "main.h"

/**
 * _isalpha - Check Description
 * @c: An input character
 * Description: Function returns 1 if input is a character,
 * lowercase or uppercase.
 * Return: 1 or 0 for otherwise.
 */

int _isalpha(int c)
{
char lower, upper;
int isletter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
