#include<stdio.h>
int fib(int n);

int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }

    int fibNm1 =fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN =fibNm1 + fibNm2;
    //printf("\nfib of %d is : %d",n,fibN);
    return fibN;

}

int main (){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("fibonacci of number is %d",fib(n));
}
    
