#include <stdio.h>

int main() {
    FILE *ptr;

    //reading a file charcater by character;
    ptr = fopen("heavenly.txt","r");
    if(ptr == NULL){
        printf("the file doesnt exist");
    }
    else{
   char c = fgetc(ptr);
    while( c != EOF){
        printf("%c",c);
        c = fgetc(ptr);

    }
    }

    //writing a character in a file
    // ptr = fopen("godly.txt","w");
    // for(int i = 0; i<12;i++){
    //     fputc('god ',ptr);
    // }


    return 0;
}