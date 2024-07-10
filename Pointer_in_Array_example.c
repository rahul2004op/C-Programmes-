#include<stdio.h>

int main(){
    int aadhar[5];

    //INTPUT
    int *ptr = &aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index :",i);
        scanf("%d",&aadhar[i]);
    }

    //OUTPUT
    for(int i=0;i<5;i++){
        printf("%d index =\n",i, &aadhar[i]);
    }
    return 0;

}