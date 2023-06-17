
#include <stdio.h>

/**
 * main - prints reversed lowercase alphabet 
 *
 * Return: Always 0 (sucsess)
 */
int main(void)
{
        char ch;

        for (ch = 'z'; ch >= 'a'; ch--)
        {
                printf("%c", ch);
        }

        putchar('\n');

        return 0;
}
