#include <stdio.h>

int sum(int a , int b){

    return  a + b;
}

int main(){
    int x = 3;
    int y = 5;
int re = sum(x, y);
printf("the sum is %d", re );

    return 0;
}