#include<stdio.h>

int pop();

 int pop (){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",**(pptr));
 }


int main (){
    pop();
    float age = 19.00;
    float *ptr = &age;
    float **pptr = &ptr;

    printf("%f\n",age);
    printf("%f\n",*ptr);
    printf("%f\n",**pptr);
    



    return 0;
}