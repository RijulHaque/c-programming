#include <stdio.h>


int absolute(int n){
    if (n < 0){
        return n * -1;
    }
    else {
        return n;
    }

}

int main(){
    int a = -6;
    //int result = absolute(a);
    printf("the absolute is %d" , absolute(a));
    
    return 0;
}