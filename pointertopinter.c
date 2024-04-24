#include <stdio.h>

int main() {
    int a = 8, *i,**j;
    i = &a;
    j = &i;

    //value of a using normal and pointer method
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",*i);

    //address of a using & and pointer variable
    printf("address of a is %u\n",i);
    printf("address of a is %u\n",&a);

    //pointer of the value at i 
    printf("value of i is %d\n",i);

    printf("address of i is %u\n",j);
    printf("address of i is %u\n",&i);

    //pointer to pointer **j pointing to the value stored in pointer to its intial value
    printf("value of a is %d\n",**j);

  //this will print the value of i
    printf("value of i is %d\n",*j);



    return 0;
}