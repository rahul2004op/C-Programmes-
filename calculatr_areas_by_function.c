// write function to calculate the area of square circle & rectangle

#include<stdio.h>
#include<math.h>

void square(int n);
void rectangle(int a,int b);
void circle(int r);

void square(int n){
    printf("enter the side of square :");
    scanf("%d",&n);

    int sqa=n*n;
    printf("area of square is %d",sqa);

}

void rectangle(int a,int b){
    printf("\nenter the length of rectanle :");
    scanf("%d",&a);
    printf("enter the breadth of rectanle :");
    scanf("%d",&b);

     int rec=a * b;
     printf("area of rectangle is %d",rec);
}

void circle(int r){
    printf("\nenter the radius of circle :");
    scanf("%d",&r);

    float cir =3.14 * r *r;
    printf("area of circle is %f",cir);
}


int main (){
    int n;
    int a,b;
    int r;
    square(n);
    rectangle(a,b);
    circle(r);
    return 0;
    
}

