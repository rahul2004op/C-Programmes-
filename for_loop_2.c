#include<stdio.h>
int main(){
    int i;
    for( i=1;i<=100;i = i+1){
        printf("%d\n",i);
    }    
    for(i=0;i<=10;i++){
        printf("%d\n",i);
    } 
    for(float a=1.0;i<=5.0;a++){
        printf("%f\n",a);
    }   
    for(char j='a';j<='z';j++){
        printf("\n%c",j);
    
    }
    return 0;
}