#include<stdio.h>

//FUNCTION DECLERATION
void printnumber(int arr[],int n);

//FUNCTION OPERATION
void printnumber(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\tthe number is %d\t",arr[i]);          // \t GIVES THE SPACE OF TAB IN THE OUTPUT

    }
    printf("\n");
}

//FUNCTION CALL 
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumber(arr,6);
    return 0;
}