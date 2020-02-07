#include<stdio.h>

void show()
{
    static int aa = 1000;
    printf("%d \n",aa);
    aa++;
}

int main()
{
    show();
    show();
}
