#include <stdio.h>

void point() {
    int aged = 25;
    int *prt = &aged;
    //address
    printf("%u\n",&aged); // adress of aged variable

    printf("%d\n",*prt); //value in ptr

    printf("%u\n",&prt); //adress of ptr

     printf("%d\n",*(&aged)); // another form to print the value



}

int main (){
    int age = 19;
    int *ptr = &age;
    int myage =*ptr;

    printf("%d\n",myage);

    point();


    return 0;
}