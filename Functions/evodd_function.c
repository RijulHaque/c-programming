#include <stdio.h>
int isEven(int a){

if ( a%2 == 1){
    return  0;
}
else
return 1;



}

int main(){
    int g = 245234;
    
    isEven(g);
    if (isEven(g) ){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}