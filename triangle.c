#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
  
    for (i = 1; i < 8; i++)
    {
        for (j = i; j < 8; j++)
        {
            for (k = 8; k > 1; k--)
            {
                printf(" ") * k-1;
            }

            printf("*") * j;
        }
        printf("\n");
    }

    return 0;
}