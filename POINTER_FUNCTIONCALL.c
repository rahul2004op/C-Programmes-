#include<stdio.h>

void square(int number);
void _square(int* n);
// call by value
void square(int number){
    number = number * number;
    printf("the square is :%d\n",number);
}

// call by reference
void _square(int* n){
    *n = (*n) * (*n);   // 4 * 4
    printf("the square is : %d\n",*n);
}

int main(){
    int number = 5;
    
    square(number);
    printf("the number is :%d\n",number);

    _square(&number);
    printf("the number is :%d\n",number);
    return 0;
}