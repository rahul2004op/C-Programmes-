#include<stdio.h>

// CREATE A 2D ARRAY TO STORE THE TABLE OF 2 AND 3
void storeTable(int arr[][10],int n,int m,int number);

void storeTable(int arr[][10],int n,int m,int number){
    
    for (int i=0;i<=m;i++){
        arr[n][i]=(i+1)*number;                 // n is the number of array
    }

}
int main (){
    int table[2][10]; // THIS SHOWS THAT THERE ARE 2 ARRAY HAVING 10 VALUES IN IT
    storeTable(table,0,10,2);
    storeTable(table,1,10,3);

    
    for (int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    }
    printf("\n");
    for (int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }
    return 0;

    
}