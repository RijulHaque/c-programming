#include <stdio.h>

int main(){
    int n , t1 = 0 , t2 = 1 ,nextTerm;
    printf("enter the number of terms :  ");
    scanf("%d", &n);
     printf("fibonacci series :\n");
      for (int  i = 0 ; i <= n ;i++ ){
        printf("%d\n" ,t1 );
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
      }


    return 0;
}