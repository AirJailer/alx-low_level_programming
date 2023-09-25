#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints two two digit combinations
 * Return: int
 */

int main(void)
{
    int i, j, x, y;

    for (x = 48; x <= 57; x++)
        for (y = 48; y <= 57; y++)
            for (i = x; i <= 57; i++)
            {
                for (j = y; j <= 57; j++)
                    if ((x + y) == (i + j))
                        continue;
                    else
                    {
                        putchar(x);
                        putchar(y);
                        putchar(' ');
                        putchar(i);
                        putchar(j);
                        if (x == 57 && y == 56)
                        {
                            putchar('\n');
                        }
                        else
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
            }

    return (0);
}
