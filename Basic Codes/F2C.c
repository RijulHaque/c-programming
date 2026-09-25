#include <stdio.h>

int main(){
    int f , c;
    printf ("enter your tempreature in celsius :");
    scanf("%d", &c);
    f = (c * 9/5) + 32;
    printf("%d" , f);

    return 0;
}
