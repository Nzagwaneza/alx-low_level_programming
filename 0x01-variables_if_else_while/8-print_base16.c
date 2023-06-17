
#include <stdio.h>

/**
 * main - prints numbers 0 - 9 and  lowercase alphabet a to f. 
 *
 * Return: Always 0 (sucsess)
 */
int main(void)
{
    int i;

    for (i = 48; i < 58; i++)
    {
	putchar(i);
    }
    for (i = 97; i < 103; i++)
    {
	putchar(i);
    }
    
    putchar('\n');
    
    return 0;
}
