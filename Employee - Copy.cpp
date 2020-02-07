#include<iostream>

using namespace std;

class Employee
{
public:

    int ID;
    string Name;
    int Salary;

    void getData()
    {
         cin >> ID;
         cin >> Name;
         cin >> Salary;
    }

    void showData()
    {
        cout << "Employee ID" << endl;
        cout << ID << endl;
        cout << "Employee Name" << endl;

        cout << Name << endl;
        cout << "Salary" << endl;
        cout << Salary << endl;
    }
};

    int main()
    {
       Employee  d1,d2;
       d1.getData();
       d1.showData();
      return 0;
   }
