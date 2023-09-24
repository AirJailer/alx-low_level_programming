#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, m;

    for (i = 48; i <= 57; i++)
    {
        for (j = i + 1; j <= 57; j++)
        {
            for (m = j + 1; m <= 57; m++)
            {    
                if (j == i || m == i || j == m)
                    continue;
                else
                { 
                    putchar(i);
                    putchar(j);
                    putchar(m);
                }
                if (i + j + m != 168)
                {    putchar(',');
                    putchar(' ');
                    
                }
                else
                    putchar('\n');
                
            }  
        }
    }
    
	return (0);
}
