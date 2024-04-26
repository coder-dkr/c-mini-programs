#include <stdio.h>

int MenuForOps(int a, int b){
    int c;
     printf("MENU\n1- Add\n2- Subtract\n3 -Multiply\n4- Divide\nyour choice:");
    scanf("%d",&c);

    switch(c){
        case 1:
        printf("The additon of %d and %d is %d",a,b,a+b);
        break;
        case 2:
        printf("The subtraction  of %d and %d is %d",a,b,a-b);
        break;
        case 3:
        printf("The multiplication of %d and %d is %d",a,b,a*b);
        break;
        case 4:
        printf("The division of %d and %d is %.2f",a,b,(float)a/b);
        break;
        default:
        printf("INVALID CHOICE..... Try again\n\n");
        MenuForOps(a,b);
        break;
    }

}
int main() {
    int a,b,c;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2st number:");
    scanf("%d",&b);

    MenuForOps(a,b);

   
    return 0;
}