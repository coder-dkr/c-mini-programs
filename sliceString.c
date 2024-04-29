#include <stdio.h>
#include <string.h>

void slice(char *c,int m, int n){
    char *str = c;
    int i = 0;
    while((m+i)<n){
     str[i] = str[m+i];
     i++;
    }
    str[i] = '\0';
}

int main() {
    char c[50];
    int m , n;
    printf("Enter the string you want to slice: ");
    fgets(c,50,stdin);
    printf("Enter slice arg 1: ");
    scanf("%d",&m);
    printf("Enter slice arg 2: ");
    scanf("%d",&n);
    slice(c,m,n); //slicing the string;  
    printf("OUtput of slice(%d,%d) --> %s",m,n,c);

    return 0;
}
