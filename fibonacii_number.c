#include<stdio.h>

int main(){
    int n;
    printf("enter the number >2:");
    scanf("%d",&n);
    int fab[n];
    fab[0]=0;
    fab[1]=1;
    printf("fibonacii series is");
    for(int i=2;i<n;i++){
        fab[i]=fab[i-1] + fab[i-2];
        printf(" %d",fab[i]);
    }
    
    
    return 0;
}