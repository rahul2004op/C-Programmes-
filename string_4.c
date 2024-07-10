#include<stdio.h>

// GET A SRTING FROM USER AND PRINT ITS LENGTH

int countlength(char arr[]);

int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;

    }
    return count-1;
}

int main (){
    char take[100];
    fgets(take,100,stdin);

    printf("the length is %d",countlength(take));
    
    return 0;
}
