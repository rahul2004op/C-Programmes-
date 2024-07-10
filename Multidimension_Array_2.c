#include<stdio.h>

    // WRITE A FUNCTION TO FIND THE ODD NUMBERS IN A ARRAY
void numberodd (int arr[],int n);

void numberodd(int arr[],int n){

    int count = 0;
    for(int i=0;i<n;i++){
        if (arr[i] % 2 != 0){
            count++;
            printf(" the odd numbers are %d\n",count);
        }
    }

}

int main(){ // 0 1 2 3 4 5 6 7 8 base indexing
    int arr[]={1,2,3,4,5,6,7,8,9};
    numberodd(arr,9);

    printf("%d\n",*(arr+2));  //THIS IS THE FUNCTION TO GET OF VALUE IN ARRAY IN A POINTER FORM
    printf("%d\n",*(arr+6));
    return 0;
}
