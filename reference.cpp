#include<iostream>

using namespace std;

int main()
{
    int a=10;
    int &b=a;

    b=3;

    cout<<a<<endl;
    cout<<b<<endl;
}
