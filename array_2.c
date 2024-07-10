#include<stdio.h>

int main(){
    float price[3];
    printf("enter the price of 1st item :");
    scanf("%f",&price[0]);
    printf("enter the price of 2nd item :");
    scanf("%f",&price[1]);
    printf("enter the price of 3rd item :");
    scanf("%f",&price[2]);

    printf("total price of 1st item = %f\n",price[0]+(price[0]*0.18));
    printf("total price of 2nd item = %f\n",price[1]+(price[1]*0.18));
    printf("total price of 3rd item = %f\n",price[2]+(price[2]*0.18)); 

    return 0;
 
 

}