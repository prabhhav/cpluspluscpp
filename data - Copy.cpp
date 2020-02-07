#include<iostream>

using namespace std;

class data
{
public:

    int A;
    int B;
    static int C;

    void getData()
    {
         cin>> A;
         cin>> B;
         cin>> C;
    }

    void showData()
    {
        cout << "A and B is" <<endl;
         cout << A <<endl;
          cout << B <<endl;
           cout << C <<endl;
    }
};

int data::C; // declaration of a static data member

int main()
{
    data d1,d2;
    d1.getData();
  //  d2.getData();
    d1.showData();
    d2.showData();
return 0;
}
