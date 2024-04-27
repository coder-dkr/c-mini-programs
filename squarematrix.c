#include <stdio.h>
#include <math.h>

//printing a square matrix....using array

int main()
{
    int n, i, sq = 0;

    printf("\nEnter the total number of terms for square matrix:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (pow(i, 2) == n)
        {
            // printf("%d is a square of %d\n",n,i);
            sq = i;
        }
    }

    //   printf("%d",sq);
    if (sq >= 1)
    {
        int arr[n];

        printf("\nEntering the Values for matrix----\n");
        for (int j = 0; j < n; j++)
        {
            printf("Enter %dth term of matrix:", j + 1);
            scanf("%d", &arr[j]);
        }

        printf("Your matrix is --->\n");
       
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);

            if ((k + 1) % sq == 0)
            {
                printf("\n");
            }
        }
        
    }
    else
    {
        printf("Please enter a valid perfect square..");
    }

    return 0;
}

