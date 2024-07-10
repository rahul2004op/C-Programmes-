#include<stdio.h>
#include<string.h>

// ARRAY IN A STRUCTURE
struct student{
    char name[100];
    int rollno;
    float CGPA;
};

int main (){
     struct student comp[100];
    struct student s1={"rahul123",121220384,7.82};// DIRECTLY GIVING THE VALUES IN THE STRUCTURE
    struct student *ptr = &s1;    // POINTER TO A STRUCTURE FORMAT
    printf("\nrollno is %d\n",(*ptr).rollno);
    printf("rollno is %d\n",(*ptr));
    
    printf("\nARROW OPERATOR FORMAT\n");
    printf("name -> %s\n",ptr->name); //ARROW OPERATOR
    printf("rollno -> %d\n",ptr->rollno);
    printf("CGPA -> %f\n",ptr->CGPA);
}