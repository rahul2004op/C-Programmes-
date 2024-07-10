#include<stdio.h>
    //store the marks of 3 subject of 2 students (2 X 3) form


    void mark();
    void markk();

    void mark(){
    int marks[2][3];

    marks[0][0] = 90; // student 1 subject 1
    marks[0][1] = 87; // student 1 subject 2
    marks[0][2] = 89; // student 1 subject 3

    marks[1][0] = 95; // student 2 subject 1
    marks[1][1] = 77; // student 2 subject 2
    marks[1][2] = 79; // student 2 subject 3

    printf("the marks is :%d",marks[1][1]);
   
    }


    void markk(){
        int markss[2][3] = {{86,65,47},{85,69,84}};

        printf("the marks are :%d\n",markss[0][2]);
    }
int main (){
    markk();
    mark();
     return 0;
}