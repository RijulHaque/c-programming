#include <stdio.h>

int main(){
    float p , r , t;
    printf("Enter the principle value :   ");
    scanf("%f" , &p);
    printf("Enter the rate value :   ");
    scanf("%f" , &r);
    printf("Enter the time  :   ");
    scanf("%f" , &t);
    printf("the SI is : %.2f\n", p * r * t / 100);

    return 0;
}