#include<stdio.h>


int main (){
    // CASE 1

    int age = 19;
    int *ptr = &age;

    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);

    //CASE 2
    float price = 130.00;
    float *pptr = &price;
    printf("\npptr = %u\n",pptr);
    pptr++;
    printf("pptr = %u\n",pptr);
    pptr--;
    printf("pptr = %u\n",pptr);

    // CASE 3
    char name = 'rahul';
    char *ppptr = &name;
    printf("\nppptr = %u\n",ppptr);
    ppptr++;
    printf("ppptr = %u\n",ppptr);
    ppptr--;
    printf("ppptr = %u\n",ppptr);
    



    return 0;
}