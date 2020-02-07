#include<stdio.h>

int bal = 1000;

void checkbal()
{
printf("%d \n", bal);
}

void withdraw(int AMT)
{
    bal = bal - AMT;
}

void deposit(int AMT)
{
    bal = bal + AMT;
}

void main()
{
    checkbal();
    withdraw(100);
    checkbal();
}

