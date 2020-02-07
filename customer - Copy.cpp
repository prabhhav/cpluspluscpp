#include<stdio.h>

class Customer
{
public:
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
};
int main()
{

    Customer c1;
    c1.checkbal();
    c1.withdraw(56);
    c1.checkbal();

}
