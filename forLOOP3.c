# include<stdio.h>
//  print the number from 0 to n, if n is given by user. 
int main (){
    int n;
    printf("enter thr  2nd number:");
    scanf("%d", &n);
    for(int s=0;s<=n;s++){
        printf("%d\n",s);
    }
    return 0;
}