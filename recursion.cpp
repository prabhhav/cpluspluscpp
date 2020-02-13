#include<iostream>
using namespace std;

void display(int a)
{
    if(a==10)
    {
        return;
    }
    else
    {
        cout<<"hi"<<endl;
        display(a+1);
    }
}

int main()
{
    display(1);
    return 0;
}
