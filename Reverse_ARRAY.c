#include<stdio.h>

void reversearray (int arr[],int n);
void printarray (int arr[],int n);


void reversearray (int arr[],int n){

    for(int i=0;i<n/2;i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-1-i];
        arr[i] = secondvalue;
        arr[n-1-i] = firstvalue; 
    }
}

void printarray(int arr[],int n){
    printf("the reverse array is : ");
    for(int i=0;i<n;i++){
        printf("  %d",arr[i]);
    }
}

int main (){
    int arr[] = {1,2,3,4,5};
    reversearray(arr,5);
    printarray(arr,5);
}