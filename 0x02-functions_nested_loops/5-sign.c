#include "main.h"

/**
 * print_sign - Check description
 * @n: An input number
 * Description: This function prints the sign of the number
 * Return: 1 if input is positive, o if 0, or
 * -1 if is negative
 */
int print_sign(int n)
{
int value;
if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
