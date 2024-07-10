#include<stdio.h>
//print the odd numbers between 0 to 50 
int main(){
    for(int i=0;i<=50;i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}