#include "holberton.h"

/**
 *_abs - Check Description
 * @r: An integer input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of r
 */

int _abs(int r)
{
if (r >= 0)
{
return (r);
}
else
{
return (r * -1);
}
}
