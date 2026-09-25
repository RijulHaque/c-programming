#include <stdio.h>

int main()
{
    int a, b, c;

    printf("ENTR YOUR NUMBER : ");
    scanf("%d", &a);
    printf("ENTER YOUR SECOND NUMBER : ");
    scanf("%d", &b);

    c = a % b;
    printf("remainder is  : %d\n", c);
}
