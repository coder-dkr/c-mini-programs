#include <stdio.h>
void drivetest();

int main() {
    drivetest();
    return 0;
}

void drivetest(){
    int age;
    char opt;
    printf("\nAre you Immortal? (y/n)\n");
    scanf("%c",&opt);
    if(opt == 'y'){
        printf("You can definately drive sir..\n");
    }
    else if(opt == 'n'){
        printf("Enter your age:\n");
        scanf("%d",&age);
        if((age < 18) || (age > 85)){
            printf("You cannot drive...\n");
        }
        else{
            printf("You can drive...\n");
        }
        
    }
    else{
        printf("Invalid input.try again\n");
        drivetest();
    }
}
