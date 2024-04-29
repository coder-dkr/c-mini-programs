#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("appendMe.txt", "a"); //append cmd 'a' creates a file if it doesnt exist
    if (ptr == NULL)
    {
        printf("file doesnt exist");
    }
    else
    {
        fprintf(ptr, "I am getting appended...");
    }
    return 0;
    fclose(ptr);
 
}

