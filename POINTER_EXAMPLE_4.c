# include<stdio.h>
// WRITE A FUNCTION TO CALCULATE THE SUM, PRODUCT, AND AVERAGE
// OF 2 NUMBERS. PRINT THAT AVERAGE IN THE MAIN FUNCTION

void doWork (int a, int b, int *sum, int *prod, int *avg);


void doWork (int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}

int main (){
    int a = 3 , b = 5;
    int sum , prod, avg;
  
    doWork(a, b, &sum, &prod, &avg);
    printf("sum = %d\nprod = %u\navg = %u\n");
    return 0;
}