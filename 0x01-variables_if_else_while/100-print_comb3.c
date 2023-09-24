#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

    for (i = 48; i <= 57; i++)
    {
        for (j = i + 1; j <= 57; j++)
        {    
            if (j == i)
                continue;
            else
            { 
                putchar(i);
                putchar(j);
            }
            if (i + j != 113)
            {    putchar(',');
                putchar(' ');
                
            }
            else
                putchar('\n');
               
        }  
    }
    
	return (0);
}
