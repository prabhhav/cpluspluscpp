#include<iostream>

using namespace std;

class data1
{
public:

    int A;

    void getA()
    {
         cin>> A;
    }

    void showA()
    {
        cout << "A is" <<endl;
        cout << A <<endl;
    }
};

class data2 : public data1
{
public:

    int B;

    void getB()
    {
         cin>> B;
    }

    void showB()
    {
        cout << "B is" <<endl;
        cout << B <<endl;
    }
};

int main()
{
    data1 d1;
    data2 d2;

    d1.getA();
    d1.showA();

    d2.getA();
    d2.getB();
    d2.showA();
    d2.showB();
    return 0;
}
