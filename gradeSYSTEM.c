# include<stdio.h>
int main(){
    int marks;
    printf("enter the marks (0-100):");
    scanf("%d",&marks);
    if(marks<30){
        printf("\nGRADE:FAIL");
    }
    else if (marks>=30 && marks<=70){
        printf("GRADE:B");
    }
    else if (marks>=70 && marks<=90){
        printf("GRADE:A");
    }
    else if (marks>=90 && marks<=100){
        printf("GRADE:A+");
    }
    else{
        printf("Wrong input");
    }
    return 0;
}