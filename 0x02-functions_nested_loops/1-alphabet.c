#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the alphabet in lowercase, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char word[30] = "abcdefghijklmnopqrstuvwxyz";
 int i;
for (i=0; i<27; i++)
{
_putchar(word[i]);
}
_putchar('\n');
return (0);
}
