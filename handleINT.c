#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    int no;
    int num;
// reading integers from a txt ptr;
    ptr = fopen("integer.txt", "r");
    if (ptr == NULL)
    {
        printf("this ptr doesnt exist\n");
    }
    else
    {
        printf("the ints are: ");
        for (int i = 0; i < 3; i++)
        {
            fscanf(ptr, "%d", &no);
            printf("%d ",no);
        }
    }
    // ***************

//writing integers in txt ptr;
    ptr = fopen("writeINT.txt","w");
    printf("enter how many intgers you want to enter: ");
    scanf("%d",&num);
    
    for(int j =0;j<num;j++){
        int value;
        printf("enter term %d:",j+1);
        scanf("%d",&value);
      
       fprintf(ptr,"%d ",value);

    }

    printf("\nprinting succwessfull");
    fclose(ptr);

    return 0;
}
