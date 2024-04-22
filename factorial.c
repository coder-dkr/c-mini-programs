#include <stdio.h>
int fac(int x);

int main() {
    int n,r;
    printf("Enter the number for getting factorial:");
    scanf("%d",&n);
    
    r = fac(n);
    printf("\nFactorial of %d is %d",n,r);

    return 0;
}

int fac(int x){
if( x == 0 || x == 1){
    return 1;

}
else{
    return (x * fac(x-1));
}


}