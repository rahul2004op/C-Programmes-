#include<stdio.h>
#include<string.h>

// TAKE A INPUT OF STRING USING A %c SPECIFIER

int main (){
    char str[144];
    char ch;
    int i=0;
    printf("enter the the string :");
    while(ch !='\n'){
        
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("the string is ");
    puts(str);
return 0;    
}