#include<stdio.h>

// Will the address output be same ?

// call by address

void printaddress(int n);

void printaddress(int n){
    printf("address of n is %p\n",&n);
}

int main(){
    int n = 4;
    printf("address of n is %p\n",&n);
    printaddress(n);
    return 0; 

}
// the value of address is not same