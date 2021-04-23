#include <iostream>
#include <string>
using namespace std;

long long FirstFactorial(int num)
{
  long long total = num;
  for (int i = num - 1; i > 0; i--)
  {
    total = total * i;
  };
  return total;
};

int main(int agrc, char *argv[])
{

  // keep this function call here
  cout << FirstFactorial(stoi(argv[1]));
  return 0;
};