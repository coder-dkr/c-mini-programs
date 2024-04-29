#include <stdio.h>

int main() {
    FILE *ptr;
    int num;
    ptr =fopen("table.txt","w");
    printf("Enter number you want table of in table.txt: ");
    scanf("%d",&num);

    for(int i = 0; i<10;i++){

        fprintf(ptr,"%d X %d = %d\n",num,(i+1),num*(i+1));
    }
    if(ptr == NULL){
        printf("unsuccessful");
    }
    else{
        printf("Printed successfully");
    }
    fclose(ptr);
    return 0;
}
