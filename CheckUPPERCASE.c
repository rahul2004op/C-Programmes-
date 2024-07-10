# include<stdio.h>
int main(){
    char ch;
    printf("enter the alphabet :");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("\nis upper case");
    }
    else if (ch>='a' && ch<='z'){
        printf("is lower case");
    }
    else {
        printf("wrong input character");
    }
    return 0;

}