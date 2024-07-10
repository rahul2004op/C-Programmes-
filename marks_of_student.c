# include<stdio.h>
# include<math.h>

void stdmark(int s,int m,int h);

void stdmark(int s,int m,int h){
    printf ("enter the marks of science:");
    scanf("%d",&s);

    printf ("enter the marks of maths:");
    scanf("%d",&m);

    printf ("enter the marks of history:");
    scanf("%d",&h);

    float per=(((s+m+h)/300.0)*100.0);
    printf("the percentage of student is :%f",per);
}

int main (){
    int s;
    int m;
    int h;
    stdmark(s,m,h);
}