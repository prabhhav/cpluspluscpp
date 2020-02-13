#include <iostream>
using namespace std;

template<class T,class T2>

void add(T a, T2 b)
{
     cout<<"Addition of i and j is :"<<a+b<<endl;
}
int main()
{
  float i =2.9;
  int j =3;
  float m = 2.3;
  float n = 1.2;
  add(i,j);
  add(m,n);
  return 0;
}
