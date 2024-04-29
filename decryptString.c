#include <stdio.h>

void decrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
    *ptr = *ptr -1;
    ptr++;

    }

}

int main() {
    char c[200];
    printf("Enter the message you want to decrypt: ");
    fgets(c,200,stdin);
   
    decrypt(c);
    printf("\nDecrypted string is -->  %s",c);

    return 0;
}




