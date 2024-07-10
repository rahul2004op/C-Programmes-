#include<stdio.h>
void printHW(int count);


int main(){
    int count;
    printf("enter the value of count :");
    scanf("%d",&count);
    printHW(count);
    return 0;
}

void printHW(int count){
    if (count == 0){
        return;
    }
    printf("Hello World\n");

    printHW(count-1); 
}

