#include <stdio.h>
int main() {
    int price[5];
    int *ptr= &price[0];
    
    for (int I=0;I<5;I++){
    printf("%d index:",I);
    scanf("%d", ptr+I);
    
    
    }
    for (int I=0;I<5;I++) {
     printf("%d index: %d \n ",I,*(ptr+I));
    
    }
    
    return 0;

}