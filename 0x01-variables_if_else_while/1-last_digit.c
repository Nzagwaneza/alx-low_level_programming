
#include <stdio.h>
#include <unistd.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in the variable n 
 * and discover whether it is >5, <6, or =0.
 *
 * Return: Always 0.
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if ((n % 10) > 5)
        {
                printf("last digit of %d is %d and is greater than 5\n",
			       	n, n % 10);
        }
        else if ((n % 10) < 6 && (n % 10) != 0)
        {
                printf("last digit of %d is %d and is less than 6 and not 0\n", 
                                n, n % 10);
        }
        else
        {
                printf("Last digit of %d is %d and is 0\n", 
				n, n % 10);
        }

        return (0);
}
