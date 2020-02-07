#include <iostream>
using namespace std;
class A
{

    int x;
      public:
      A(){} // constructor
    A(int i) // argument constructor
    {
       x=i;
    }
    void operator+(A);
    void display();
};

void A :: operator+(A a) //copy constructor,  we cannot use this in operator overloading
{

    int m = x+a.x;
    cout<<"The result of the addition of two objects is : "<<m;

}
int main()
{
    A a1(5);
    A a2(4);
    a1+a2;
    return 0;
}
