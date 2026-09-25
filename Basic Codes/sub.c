#include <stdio.h>

int main()
{
    int a;
    int b;
    int d;

    printf("ENTR YOUR NUMBER : ");
    scanf("%d", &a);
    printf("ENTER YOUR SECOND NUMBER : ");
    scanf("%d", &b);

    d = a - b;
    printf("SUBTRACT IS : %d\n", d);
    return 0;
}
