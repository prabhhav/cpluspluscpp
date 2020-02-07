#include<iostream>

using namespace std;

class A
{
public :

    int a = 10;

};


class B : public A
{
public :

    int b = 20;


};

class C : public A
{
    public :
    int c;

};

int main()
{
    C obc;
    B obc1;

     obc.a; // only 10,  no means


    obc.c=30;
    obc1.b = 40;
    cout<<obc.a<<endl;

    cout<<obc.c<<endl;

    cout<<obc1.a<<endl;
    cout<<obc1.b<<endl;

    return 0;
}



