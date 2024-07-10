# include<stdio.h>
int main (){
    int age;
    printf("enter the age :");
    scanf("%d", &age);

    if(age<13){
        printf("the person is a child\n");
    }
    else if(age>=13 && age<=18){
        printf("the person is teenager");
    }
    else{
        printf("the person is an adult\n");
    }
    return 0;
}s