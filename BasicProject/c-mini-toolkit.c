#include <stdio.h>

int square(int n)
{
    return n * n;
}

int greaterthree(int h, int j, int g)
{
    if (h > j && h > g)
    {
        return h;
    }
    else if (j > g && j > h)
    {
        return j;
    }
    else
    {
        return g;
    }
}
int greatertwo(int h, int j)
{
    if (h > j)
    {
        return h;
    }
    else
    {
        return j;
    }
}

int Even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int sum(int n, int q)
{
    return n + q;
}

int absolute(int n)
{
    if (n < 0)
        return n * -1;
    else
    {
        return n;
    }
}

int main()
{

    int a;

    printf("1. Square\n");
    printf("2. Greater of two numbers\n");
    printf("3. Largest of three numbers\n");
    printf("4. Even or Odd\n");
    printf("5. Absolute value\n");
    printf("6. Sum\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);

    if (a == 1)
    {
        int Square_1;
        printf("Enter a number :");
        scanf("%d", &Square_1);
        printf("the square is %d\n", square(Square_1));

        // Square
    }
    else if (a == 2)
    {
        int g, f;
        printf("enter your first number  : ");
        scanf("%d", &g);
        printf("enter your second number  : ");
        scanf("%d", &f);

        int result_1 = greatertwo(g, f);

        printf("the greater number is %d\n", result_1);

        // Greater
    }
    else if (a == 3)
    {
        int l, o, p;
        printf("enter your first number  : ");
        scanf("%d", &l);
        printf("enter your second number  : ");
        scanf("%d", &o);
        printf("enter your third number  : ");
        scanf("%d", &p);

        int result_2 = greaterthree(l, o, p);

        printf("the greater number is %d\n", result_2);
        // Largest
    }
    else if (a == 4)
    {
        int Num_3;
        printf("Enter a number  :");
        scanf("%d", &Num_3);

        if (Even(Num_3))
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
        // Even/Odd
    }
    else if (a == 5)
    {
        int Abs_1;
        printf("Enter a number :");
        scanf("%d", &Abs_1);
        printf("the absolute value is %d\n ", absolute(Abs_1));
        // Absolute
    }
    else if (a == 6)
    {
        int Sum_number1, Sum_number2;
        printf("enter a number ");
        scanf("%d", &Sum_number1);
        printf("enter another number ");
        scanf("%d", &Sum_number2);
        printf("The sum is %d\n", sum(Sum_number1, Sum_number2));
        // Sum
    }
    else if (a == 7)
    {
        printf("Thank You ;)");
        // Exit
    }
    else
    {
        // Invalid choice
        printf("invalid choice :(");
    }


    
    
    return 0;
}
