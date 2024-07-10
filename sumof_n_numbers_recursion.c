#include<stdio.h>
#include<math.h>

int sum(int n);

int sum(int n){
    if (n==1){
        return 1;
    }
    int sum_num_1=sum(n-1); //sum of 1 to n
    int num1=sum_num_1 + n;
    return num1;
}

int main (){
    int n;
     printf("Enter the number:");
    scanf("%d", &n);

    printf("sum is :%d",sum(n));
    return 0;

}