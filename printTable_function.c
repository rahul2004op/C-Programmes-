#include<stdio.h>
 
void printTable(int n);

void printTable(int n){ // parameter or formal parameter
    for (int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
    
}

int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printTable(n); // argument or actual parameter

    return 0;

}