#include <iostream>
using namespace std;

int main()
{
  double A = 100;
  double B = 2001.5251;
  double C = 201455.2646;

  cout << hex << left << showbase << nouppercase << (long long)A << endl;
  cout << left << showbase << nouppercase << (long long)A << endl;
  cout << hex << showbase << nouppercase << (long long)A << endl;
  cout << hex << left << nouppercase << (long long)A << endl;
  cout << hex << left << showbase << (long long)A << endl;
  cout << hex << left << showbase << nouppercase << A << endl;
  // actual printed part
};