# include<stdio.h>
# include<string.h>

struct student{
    int rollNO;
    float CGPA;
    char name[];
};
int main(){
    struct student s1;
    s1.rollNO=121907;
    s1.CGPA=7.82;
    strcpy(s1.name,"rahul");

    printf("name is %s\n",s1.name);
    printf("roll number is %d\n",s1.rollNO);
    printf("CGPA is %f\n",s1.CGPA);
    return 0;
}