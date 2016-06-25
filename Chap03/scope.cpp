#include <iostream>
using namespace std;

float bodyTempC(), bodyTempF();

int main()
{
 cout << "Centrigrade: " << bodyTempC() << endl;
 cout << "Fahrenheit: " << bodyTempF() << endl;

 return 0;
}

float bodyTempC()
{
 float temperature = 37.0;
 return temperature;
}

float bodyTempF()
{ 
 float temperature = 98.6;
 return temperature;
}
