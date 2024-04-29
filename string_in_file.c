#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    char gender[50];

    FILE *ptr;
    ptr = fopen("form.txt","w");

    printf("Enter your name: ");
    fgets(name,50,stdin);
    fflush(stdin);
    printf("Enter your age: ");
    scanf("%d",&age);

    getchar(); //catches the newline character '\n' as fgets also captures it;

    fflush(stdin);
    printf("Enter your gender: ");
    fgets(gender,50,stdin);
    fflush(stdin);
    
    fprintf(ptr,"Name: %s",name); // \n not added as string returns \n by default
    fprintf(ptr,"age: %d\n",age);
    fprintf(ptr,"gender: %s",gender);

    if(ptr == NULL){
        printf("operation unsuccessfull");
    }
    else{
        printf("Name, age, gender added successfully");
    }

   fclose(ptr);
    return 0;
}



