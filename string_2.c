#include<stdio.h>

void string(char arr[]);

void string(char arr[]){
    for (int i=0;arr[i]!=0;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

int main(){
    char name[50];
    printf("enter your name :");
    scanf("%s",name);
    printf("your good name is %s\n",name);
    string(name);
    return 0;
}