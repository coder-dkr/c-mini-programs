#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,guess,count = 0;
    srand(time(0));
    num = rand()%100 +1;
    do{
      printf("Enter your guess:\n");
      scanf("%d",&guess);
      if(num > guess){
        printf("Your guess is smaller than the number\n");
      }
      else if(num < guess){
        printf("Your guess is bigger than the number\n");
      }
      else if(num == guess){
        printf("Your guess is right and the number is %d\n",guess);
      }
      else{
        printf("Unexpected Output\n");
      }
      count++;
    }while(num != guess);
    printf("Your score out of humdered is %d\n",100 - count);
    return 0;
}