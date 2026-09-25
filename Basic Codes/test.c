#include <stdio.h>

int main()
{

    int a, b, c;
    printf("enter number  ");
    scanf("%d", &a);
    printf("enter number  ");
    scanf("%d", &b);
    printf("enter number  ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {

        printf("%d is the greatest", a);
    }
    else
        printf("maa chuda");

    return 0;
}