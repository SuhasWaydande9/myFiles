#include <iostream>

using namespace std;

int bitwiseAND(int n1, int n2)
{
  return n1 & n2;
}

int bitwiseOR(int n1, int n2)
{
  return n1 | n2;
}

int bitwiseXOR(int n1, int n2)
{
  return n1 ^ n2;
}

int main()
{
  cout << bitwiseAND(7, 12) << endl;
  cout << bitwiseOR(7, 6) << endl;
  cout << bitwiseXOR(7, 6) << endl;
};