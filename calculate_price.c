#include<stdio.h>

void calculate(float n);

int main(){
    int n;
    printf("enter the MRP :");
    scanf("%d",&n);

    calculate(n);

    return 0;
}

void calculate(float n){
    n=n+(0.18 * n);

    printf ("the total price of item is %f",n);

}