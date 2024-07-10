#include<stdio.h>
#include<math.h>


void square(int n);

void square(int n){
    int a=pow(n,2);
    printf("the square is %d",a);
    
    
}

int main (){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    square(n);
    return 0;

}