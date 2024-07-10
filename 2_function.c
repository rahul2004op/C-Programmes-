#include<stdio.h>
// Write the function that print Namaste if the user is indian ^& Bonjour if the user is french

void printnamaste ();
void printbonjour() ;


void printnamaste(){
    printf("NAMASTE");
}
void printbonjour(){
    printf("BONJOUR");
}

int main(){
    char ch;
    printf("enter your identity :");
    scanf("%c",&ch);
    if (ch=='i'){
        printnamaste();
    }
    else{
        printbonjour();
    }
    return 0;
}