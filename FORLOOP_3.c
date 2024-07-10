#include<stdio.h>
// print the sum of n natural numbers
int main(){
    int n;
    printf("enter the number :");
    scanf("%dn",&n);
    int sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+i; //sum+=1
    }
    
    printf("the sum is %d \n",sum);


        

    return 0;
}