# include<stdio.h>
int main() {
    int m;
    printf("enter the marks of student (0-100) :");
    scanf("%d",&m);
    if(m>=0 && m<=30){
        printf("\nthe student is Fail");
    }
    else if (m>=30 && m<=100){
        printf("the student is Pass");
    }

    else{
        printf("wrong input marks");
    }
    return 0;
}