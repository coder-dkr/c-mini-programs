#include <stdio.h>

//strcpy manual func
void stringCopy(char *t,char *s){
       while(*s != '\0'){
          *t = *s;
          s++;
          t++;
       }
       *t = '\0';

}

int main() {
    char target[50] = "Dhruv";
    char source[50] = "Hello Dhruv";


    stringCopy(target,source);
    printf("%s",target);
    return 0;
}





