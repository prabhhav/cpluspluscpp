#include <iostream>
using namespace std;
class Test
{
   private:
      int num;
   public:
       Test(): num(8){} // default constructor
       // constructor initializes the data member
       void operator ++()         {
          num = num+2; // num is getting the value 8
       }
       void Print() {
           cout<<"The Count is: "<<num;
       }
};
int main()
{
    Test tt; // when the object is made constructor is called
    ++tt;  // calling of a function "void operator ++()"
    tt.Print();
    return 0;
}
