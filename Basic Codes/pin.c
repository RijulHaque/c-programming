#include <stdio.h>

int main(){
    int a , b, c;
    printf("enter your pin :");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
if (a == 2 && b == 4 && c == 5){
    printf("pin is correct");
}
else{
    printf("pin is incorrect");
}
    return 0;
}