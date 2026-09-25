#include <stdio.h>

int main(){
    int a ;
    int c;

    printf("enter a year :");
    scanf("%d" , &a);
    c = a%4;
    if (c == 0){
        printf("leap year");

    }
    else{
        printf("not a leap year");
    }
    return 0;
}