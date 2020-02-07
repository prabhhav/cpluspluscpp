/* This Pointer: InfoBrother */

#include<iostream>
using namespace std;

class Point
{
    private:
        int x;

    public:
        void setx(int a) //simple function.
        {
            this->x=a;
        }
};

main()
{
   Point obj1;   //1st Object of Class Point.
   Point obj2;   //2nd Object of Class point.

   obj1.setx(10); //function calling using 1st object.
   obj2.setx(30); //function calling using 2nd object.

   return 0;
}
