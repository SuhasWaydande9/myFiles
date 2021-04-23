#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str)
{
  string dummy = str;
  int j = 0;
  for (int i = str.length() - 1; i >= 0; i--)
  {
    dummy[j] = str[i];
    j++;
  }

  str = dummy;
  return str;
};

int main(int argc, char *argv[])
{

  // keep this function call here
  cout << FirstReverse(argv[1]);
  return 0;
};