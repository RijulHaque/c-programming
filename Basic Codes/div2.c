#include <stdio.h>

int main(){
    int a , b;
    printf("enter a number :");
    scanf("%d" , &a);
    b= a%2;

    if(b==0){
        printf("divisible by 2");
    }
    else{
        printf("not divisible by 2");
        
    }
    return 0;
}
