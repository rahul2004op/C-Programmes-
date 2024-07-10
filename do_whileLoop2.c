#include<stdio.h>
// take the input untill the number is an odd number
int main(){
    int n;
    
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n % 2!=0){
            break;
        }
    }while(1);
    printf("\nthe entered is odd");

// enter the number untill we get a multiple of 7
    int a;
    do{
        printf("\nenter the second number:");
        scanf("%d",&a);
        printf("%d\n",a);
        if(a % 7 == 0){
            break;
            printf("\nentered number is multiple of 7");
        }
    }while(1);
        
    return 0;

}