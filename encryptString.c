#include <stdio.h>

void encrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
    *ptr = *ptr + 1;
    ptr++;

    }

}

int main() {
    char c[200];
    printf("Enter the message you want to encrypt: ");
    fgets(c,200,stdin);
    encrypt(c);
    printf("\nEncrypted string is -->  %s",c);

    return 0;
}



