#include<iostream>

using namespace std;

class A
{
public :

    int a = 10;

};



class B
{
public :

    int b = 20;


};

class C : public A, public B
{
    public :
    int c;

};

int main()
{
    C obc;


     cout<<obc.a<<endl;
     cout<<obc.b<<endl;
    cout<<obc.c<<endl;

    obc.a; // only 10,  no means
    obc.b;

    obc.c=30;
     cout<<obc.a<<endl;
     cout<<obc.b<<endl;
    cout<<obc.c<<endl;

    return 0;
}




