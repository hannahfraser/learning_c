#include <iostream>
using namespace std;

int main()
{
 int nil = 0, num = 0, max = 1; char cap = 'A', low = 'a';
 
 cout << "Equality comparisons: ";
 cout << "(0 == 0)" << (nil == num) << "(true)";
 cout << "(A == a)" << (cap == low) << "(false)";

 cout << endl << "Inequality comparisons: ";
 cout << "(0 != 1)" << (nil != max) << "(true)";
 cout << endl << "(0 > 1)" << (nil > max) << "(false)";
 cout << endl << "(0 < 1)" << (num < max) << "(true)";
 cout << endl << "Greater or equal comparison: ";
 cout << "(0 >= 0)" << (nil >= num) << "(true)";
 cout << endl << "Lesser or equal comparison: ";
 cout << "(1 <= 0)" << (max <= nil ) << "(false)";

 return 0;
}
