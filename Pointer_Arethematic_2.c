#include<stdio.h>

int main (){

    int age = 19;
    int age2 = 22;

    int *ptr1 = &age;
    int *ptr2 = &age2;
    int pptr = ptr1 - ptr2;

    printf("ptr 1 = %d\nptr 2 = %d\nptr1-ptr2 = %d\n",ptr1, ptr2, ptr1-ptr2);
  

    // ptr1 - ptr2 = 1 (difference of 1 integer)
    ptr2 = &age;
    printf("comparison = %d\n",ptr1==ptr2);
    return 0;
}