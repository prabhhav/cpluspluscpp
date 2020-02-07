#include<iostream>

using namespace std;

class Customer
{
public:
int bal;

Customer()
{
    cout<<"default constructor\n";
    bal=0;
}

Customer(int amt)
{
    cout<<"argumented constructor\n";
    bal=amt;
}

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
    Customer c1(345),c2;

    c1.checkbal();
    c2.checkbal();
}
