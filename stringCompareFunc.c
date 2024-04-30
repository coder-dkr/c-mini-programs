#include <stdio.h>

int stringcomp(char *a,char *b){
     while((*a != '\0')&& (*b != '\0')){
        while(*a && *b && *a == *b){
            ++a;
            ++b;
        }
        return (int)((*a)-(*b));
    
     }



}

int main() {
    char a[20] = "tyr";
    char b[20] = "tyr";
    
   int result = stringcomp(a,b);
   if(result > 0){
    printf("A is big");
   }
   else if(result < 0){
    printf("B is big");
   }
   else{
    printf("both are equal");
   }
  
   


    return 0;
}

