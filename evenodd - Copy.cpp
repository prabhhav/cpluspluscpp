#include <iostream>
using namespace std;


bool isEven(int n)
{
return (n % 2 == 0);
}

// Driver code
int main()
{
int n = 10;
isEven(n)? cout << "Even" :
           cout << "Odd";

return 0;
}
