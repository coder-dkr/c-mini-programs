#include <stdio.h>

int main() {
    int num,term;
    printf("enter the number you want table of:");

    scanf("%d",&num);
    printf("Till how many terms??");
    scanf("%d",&term);

    printf("\nTable of %d is:-\n",num);

    for(int i=1; i<=term;i++){
        printf("\n..%d X %d = %d..",num,i,num*i);
    }

    return 0;
}