# include<stdio.h>
int main (){
    char str[100];             // TO GET THE MULTIPLE STIRNG AS AN INPUT
    fgets(str,100,stdin);
    puts(str);

    char *canchange="Hello World";
    puts(canchange);
    canchange="hello";
    puts(canchange);

    char cannotchange[]="C programming";
    puts(cannotchange);
    
    return 0;
}