#include <stdio.h>
void evenodd(int n){
    if ((n % 2 ) == 0){
        printf("even");
    }
    else
    printf("odd");
}

int main(){
    
int a = 4;
evenodd(a);
    
    return 0;
}