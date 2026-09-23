#include <stdio.h>


void greater(int a ,int b){
    if (a > b){
        printf("greater is %d", a);
}
else{
    printf("greater is %d", b);
}
    }


int main(){
int a , b;
    printf("enter a number :");
    scanf("%d" , &a);
    printf("enter a number :");
    scanf("%d" , &b);


    greater( a , b);
    return 0;
}