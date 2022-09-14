#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the alphabet in lowercase, followed by a new line.
 * Return: No return.
 */
void print_alphabet(void)
{
char i;
for (i='a'; i<='z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
