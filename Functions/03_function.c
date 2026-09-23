#include <stdio.h>

int greater(int a , int b){
    if (a >b){
        return  a;
        
    }

   else{
    return b;
   }
}



int main(){
    int x = 3;
    int y = 6;
    int result = greater(x , y);
    printf(" the greater number is %d", result ) ;


    return 0;
}