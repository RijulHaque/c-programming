#include <stdio.h>

int main()
{
    int a;
    int b;
    int d, c;

    printf("ENTR YOUR NUMBER : ");
    scanf("%d", &a);
    printf("ENTER YOUR SECOND NUMBER : ");
    scanf("%d", &b);
    printf("ENTER YOUR THIRD NUMBER : ");
    scanf("%d", &c);

    d = a - b - c;
    printf("SUBTRACT IS : %d\n", d);
}
