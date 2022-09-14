#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet in lowercase ten times followed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
char i;
int x;
for (x = 0; x <= 9; x++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
