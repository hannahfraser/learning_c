//
// program to convert temperature from celsius to farenheit

// this is an edit to the program to test how this works

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
//enter the temperature in celsius
int celsius;
cout << "Enter the temperature in Celsius:"; 
cin >> celsius;

// calculate conversion factor for celsius
int factor;
factor = 212 - 32;

// use conversion factor to convert c to f
int fahrenheit;
fahrenheit = factor*celsius/100 + 32;

// output the result following by a newline
cout <<"Fahrenheit value is :";
cout << fahrenheit << endl;

// wait unitl user is read befire terminating program to allow to see the program results
system("PAUSE");
return 0;
}
