#include <iostream>
using namespace std;

int main()
{
 int a = 8, b = 4;

 cout << "Add and assign, a = 8+4, a = " << (a+=b) << endl;
 cout << "Subtract and assign, a = 8-4, a = " << (a-=b) << endl;
 cout << "Multiply and assign, a = 8*4, a = " << (a*=b) << endl;

 return 0;

}
