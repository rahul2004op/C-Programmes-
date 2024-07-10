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
    printf("name of student = %s\n",s1.name);
    printf ("rollno of student = %d\n",s1.rollno);
    printf("CGPA of student = %f\n",s1.CGPA);

    struct student *ptr = &s1;    // POINTER TO A STRUCTURE FORMAT
    printf("\nrollno is %d\n",(*ptr).rollno);
    printf("rollno is %d\n",(*ptr));
    
    printf("\nARROW OPERATOR FORMAT\n");
    printf("name -> %s\n",ptr->name); //ARROW OPERATOR
    printf("rollno -> %d\n",ptr->rollno);
    printf("CGPA -> %f\n",ptr->CGPA); 

    strcpy(comp[0].name,"rahul");
    comp[0].rollno=121907;
    comp[0].CGPA=8.21;

    printf("\nname = %s\n",comp[0].name);
    printf("rollno = %d\n",comp[0].rollno);
    printf("CGPA = %f\n",comp[0].CGPA);

    return 0;
    
}  