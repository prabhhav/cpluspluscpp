#include<stdio.h>

void my()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    int c = a+b;
    printf("Sum of the numbers = %d\n", c);

}

void my2()
{
    int a = 6;
    int b = 7;
    scanf("%d%d", &a, &b);
    int c = a*b;
    printf("Multiplication of the numbers = %d\n", c);
}

int main()
{
    my();
    my2();
    return 0;
}
