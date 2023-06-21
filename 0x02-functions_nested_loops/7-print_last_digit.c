#include "main.h"
/**
*print last digit of a number
*@n: the number in question
*return last digit of a number
*/

int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;

_putchar(last_digit + '0');

return (last_digit);
}
