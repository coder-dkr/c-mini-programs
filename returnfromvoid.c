#include <stdio.h>
// we can also write the function in the declaration zone but its not recommended
void avgAndsum (int a, int b, int *sum, float *avg){
    *sum = (a+b);
    *avg = (float)(*sum)/2;
}

int main() {
    int a, b , sum;
    float avg;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);

// we passed the values of sum and avg as by reference using the & operator and stored the altered value from the function in the newly created variable

    avgAndsum(a,b,&sum,&avg);
    printf("The value of sum and average is %d and %f",sum,avg);
    

    return 0;
}