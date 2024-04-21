#include <stdio.h>

int main() {
    int principle,rate,time;
    int simpleinterest = 0 ;
    printf("Enter your Principle rate(%) and time in years for simple interest  (give space btwn):\n");
    scanf("%d %d %d",&principle,&rate,&time);
    simpleinterest = (principle*rate*time)/100;
    printf("\nYour calculated simple interest is: %d",simpleinterest);
    

    return 0;
}