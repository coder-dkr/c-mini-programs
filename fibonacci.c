#include <stdio.h>
int fibonacci(int x);

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Fibinacci series:\n");
    for(int i = 0; i<=n; i++){

        printf("%d ",fibonacci(i));
    }
    

    return 0;
}

int fibonacci(int x){
  if(x == 0){
    return 0;
  }
  else if(x == 1){
    return 1;
  }
  else{
    return (fibonacci(x-1) + fibonacci(x-2));
  }

}