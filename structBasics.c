#include <stdio.h>
#include <string.h>

// A structure is a datatype which can containe multiple types of data in it;
struct person{
    char name[40];
    int age;
    char gender[8];
}; //semicolon is a must ;

int main() {
    //method 1
    struct person A; 
    A.age = 20;
    strcpy(A.name,"Dhruv"); // we have to use strcpy as string cannot be give value like int;
    strcpy(A.gender,"Male");

    struct person B = {"Surbhi",23,"female"}; //method 2

    printf("Name: %s\n",A.name);
    printf("age: %d\n",A.age);
    printf("Gender: %s\n\n",A.gender);
    printf("Name: %s\n",B.name);
    printf("age: %d\n",B.age);
    printf("Gender: %s\n",B.gender);


    

    return 0;
}