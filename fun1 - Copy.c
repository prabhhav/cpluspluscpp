#include<stdio.h>

void my(int a,int b)
{
    int c = a+b;
    printf("Sum of the numbers = %d\n", c);

}

void my2(int a,int b)
{
    int d = a*b;
    printf("Multiplication of the numbers = %d\n", d);
}

int main()
{

    int a;
    int b;
    scanf("%d%d", &a, &b);

    my(a,b);
    my2(a,b);
    return 0;
}
