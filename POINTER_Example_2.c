#include<stdio.h>

int main () {
    int x;
    int *ptr;

    ptr = &x; // taking the address of variable 'x' in ptr
    *ptr = 0;  // x=9  Assigning the value in variable 'x'

    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);


    *ptr+=5; //*ptr = *ptr +5
    printf("X = %d\n",x); // x=5
    printf("*ptr = %d\n",*ptr); // *ptr = 5

    (*ptr)++; //here the value of *ptr = 5 , *ptr = {*ptr +1} = 5+1 =6
    printf("x=%d\n",x);
    printf("*ptr = %d\n",*ptr);

    return 0;
}