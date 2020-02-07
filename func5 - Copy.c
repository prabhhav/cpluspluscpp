#include<stdio.h>

int lit(int x, int y)
{
    if (x+y > 10)
      return x+y;
    else
      return x*y;
}
int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    int v = lit(a,b);
    printf("v is %d", v);

    return 0;
}




