#include <stdio.h>

int main()
{
    int a;
    int b;
    int c, d;
    int x;
    printf("ENTR YOUR NUMBER : ");
    scanf("%d", &a);
    printf("ENTER YOUR SECOND NUMBER : ");
    scanf("%d", &b);

    c = a + b;
    printf("YOUR SUM IS : %d\n", c);
    d = a - b;
    printf("SUBTRACT IS : %d\n", d);
    x = a * b;
    printf("AREA OF SQUARE IS : %d\n", x);
}
