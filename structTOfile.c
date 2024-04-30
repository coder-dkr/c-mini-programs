#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//program entering students data in a file using struct

typedef struct student
{
    char name[50];
    int roll;
    char grade[10];
} std;

int main()
{
    FILE *file;
    int num;
    printf("Enter number of student data you want to append in file: ");
    scanf("%d", &num);
    std data[num];
    file = fopen("studentData.txt", "w");
    getchar();

    for (int j = 0; j < num; j++)
    {

        printf("Enter student %d Name: ", j + 1);
        fgets(data[j].name, 50, stdin);
        printf("Enter student %d Roll number: ", j + 1);
        scanf("%d", &data[j].roll);
        getchar();
        printf("Enter student %d grade: ", j + 1);
        fgets(data[j].grade, 10, stdin);
        printf("\n");
    }

    for (int i = 0; i < num; i++)
    {
        fprintf(file, "Student %d ->\n", i + 1);
        fprintf(file, " Name: %s ", data[i].name);
        fprintf(file, "Roll number: %d\n", data[i].roll);
        fprintf(file, " Grade: %s\n", data[i].grade);
        printf("\n");
    }
    if (file == NULL)
    {
        printf("Error in printing data...");
    }
    else
    {
        printf("successfully printed");
    }
    fclose(file);

    return 0;
}


