#include <stdio.h>
int addfunc();
int subfunc();
int mulfunc();
int divfunc();

int main() {
    int add,sub,mul,div,inp1,inp2;
    
    printf("\n**********Arthemactic Operations*********\n");
    printf("Enter Number 1:");
    scanf("%d",&inp1);
    printf("Enter Number 2:");
    scanf("%d",&inp2);


    add = addfunc(inp1,inp2);
    sub = subfunc(inp1,inp2);
    mul = mulfunc(inp1,inp2);
    div = divfunc(inp1,inp2);

    printf("The addition of %d and %d : %d\n",inp1,inp2,add);
    printf("The substraction of %d and %d : %d\n",inp1,inp2,sub);
    printf("The multiplication of %d and %d : %d\n",inp1,inp2,mul);
    printf("The division of %d and %d : %d\n",inp1,inp2,div);
   
   

    return 0;
}

int addfunc(int1,int2){
    return (int1+int2);
}

int subfunc(int1,int2){
    return (int1-int2);
}

int mulfunc(int1,int2){
    return (int1*int2);
}

int divfunc(int1,int2){
    return (int1/int2);
}