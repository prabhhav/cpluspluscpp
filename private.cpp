#include<iostream>
using namespace std;

class Circle
{
    // private data member
    private:
        double radius;

    // public member function
    public:


        double  compute_area()
        {   // member function can access private
            // data member radius
            return 3.14*radius*radius;
        }


        double  setradious(double bbb)
        {   // member function can access private
            // data member radius
            radius=bbb;
        }
};

// main function
int main()
{
    // creating object of the class
    Circle obj;

    // trying to access private data member
    // directly outside the class
  //  obj.radius = 1.5;
    obj.setradious(12);


    cout << "Area is:" << obj.compute_area();
    return 0;
}
