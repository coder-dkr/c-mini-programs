#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct employee{
    int code;
    float salary; //in $
    char name[30];
}emp;  //typedef is used to set an allias for the struct

int main() {
    emp *ptr;
    emp A;
    ptr = &A;
  
    ptr->code = 101; //for pointer we use -> arrow operator
    ptr->salary = 150.69;
    strcpy(ptr->name,"sachin");

    printf("code is %d\n",ptr->code);
    printf("salary is %.2f\n",ptr->salary);
    printf("name is %s\n",A.name);

    return 0;
}


