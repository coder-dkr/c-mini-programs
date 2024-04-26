#include <stdio.h>

//program to display a remark on the basis of your entered grade..

int main() {
    char grade;
    printf("Enter your grade (O,A,B,C,D):");
    scanf("%c",&grade);
    switch(grade){
        case 'O':
        printf("Excellent your score is very very good, congratulations!!..\n");
        break;
        case 'A':
        printf("Your score is good, you may feel proud..\n");
        break;
        case 'B':
        printf("Your score is above average..\n");
        break;
        case 'C':
        printf("Your score is below average..\n");
        break;
        case 'D':
        printf("Your failed..\n");
        break;
        default :
        printf("ENTER A VALID GRADE");
        break;
        
    }

    return 0;
}