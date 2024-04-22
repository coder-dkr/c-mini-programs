#include <stdio.h>

int main() {
    int i = 21;
    int *j = &i;

    // methods of using pointers
    // %u is used to print address

    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The addressof i is %u\n",j);
    printf("The address of i is %u\n",&i);
    printf("The value of j is %d\n",j);
    printf("The value of j is %d\n",*(&j));
    printf("The address of j is %u\n",&j);


    return 0;
}