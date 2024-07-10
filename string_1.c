#include<stdio.h>

void string (char arr[]);

void string(char arr[]){
    for (int i = 0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }

printf("\n");
}
int main(){
    int arr;
    char firstname[]="RAHUL";
    char lastname[]="WANJARE";
    string(firstname);
    string(lastname);
    char str[100];
    gets(str);
    puts(str);
    return 0;
}