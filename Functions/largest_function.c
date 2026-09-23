#include <stdio.h>

int max(int a ,  int b,  int c){

    if(a > b &&  a > c){
          return a;
    }
  
    else if(b > a && b  > c){
        return b;

    }
    else {
        return c;
    }
    
}


int main(){
    
    int i = 3;
    int j = 999;
    int k = 10000;
    
    int result =  max(i , j , k);
    printf(" the largest number is : %d" , result);



    return 0;
}