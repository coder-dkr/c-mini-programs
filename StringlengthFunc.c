#include <stdio.h>
#include <string.h>

int strlength(char *c){
   char *ptr = c;
   int count = 0;
   while(*ptr != '\0'){
    count++;
    ptr++;

   }
   return count;

}

int main() {
    char c[100];
    printf("Enter the string you want length of: ");
    fgets(c,100,stdin);
    int num = strlength(c);
    printf("Length of string %s --> %d",c,num-1); //fgets also capture the nextline character \n ;

    return 0;
}




