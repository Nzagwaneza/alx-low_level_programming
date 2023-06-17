
#include <stdio.h>

/**
 * main - prints numbers from 0 - 9
 *
 * Return: Always 0 (sucsess)
 */
int main(void)
{
        int i;

        for (i = 48; i < 58; i++)
        {
                printf("%d", i);
        }

        putchar('\n');

        return 0;
}
