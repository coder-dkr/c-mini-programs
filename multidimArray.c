#include <stdio.h>

//program to take input for a 2 dim array;

int main() {
    int r,c;
    printf("Enter no. of rows of multi dimensional Array: ");
    scanf("%d",&r);
    printf("Enter no. of coloums of multi dimensional Array: ");
    scanf("%d",&c);

    int Arr[r][c];
    for(int i = 0; i < r ; i++){
      for(int j = 0; j < c ; j++)  {
          printf("Enter %d term of %d row ",j+1,i+1);
          scanf("%d",&Arr[i][j]);
      }
      printf("\n");
    }

 for(int i = 0; i < r ; i++){
      for(int j = 0; j < c ; j++){
        printf("value of Arr[%d][%d] is %d\n",i,j,Arr[i][j]);
      }
      printf("\n");
      
      }


    return 0;
}
