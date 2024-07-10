#include<stdio.h>
#include<math.h>

float converttemp(float c);

float converttemp(float c){
    
    printf("enter the temperature in celsius :");
    scanf("%f",&c);
    float far = c * (9.0/5.0) + 32;
    printf("temperature in faranite:%f\n",far);

}
int main () {
    float c;
    converttemp(c);
}
