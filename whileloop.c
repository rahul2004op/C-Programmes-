#include<stdio.h>
int main(){
    int z=1;
    while(z<=10) {
        printf("Hello World\n");
        z++;
    }
    // print the number from 0 to n, if n is given by user. 
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    int i;
    while(i<= a){
        printf("%d\n", i);
        i++;

    }
    
    return 0;
}