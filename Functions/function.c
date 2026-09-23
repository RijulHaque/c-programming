#include <stdio.h>


void square(int n)
{
    
    printf("the square is %d", n*n);
}

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    square(n);

    return 0;
}
