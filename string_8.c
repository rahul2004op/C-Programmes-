#include<stdio.h>
#include<string.h>
// WRITE A FUNCTION NAMED "SLICE",WHICH TAKES A STRING AND RETURN A SLICED STRING FROM INDEX 'n' TO 'm' 

void slice(char str[],int n, int m);
void slice(char str[],int n,int m){
    char newstr[100];
    int j=0;
    for (int i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
int main (){
    int n,m;
    char str[] ="WelcomeToProgramming";
    printf("enter the values of 'n' and 'm' :");
    scanf("%d %d",&n,&m);
    printf("the required string is ");
    slice(str,n,m);
    return 0;

}