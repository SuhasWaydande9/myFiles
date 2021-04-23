#include <iostream>

using namespace std;

string longBurp(int num)
{
  string fst = "Bu";
  string snd;
  string lst = "p";

  for (int i = 0; i < num; i++)
  {
    snd += 'r';
  };

  return fst + snd + lst;
}

int main()
{
  cout << longBurp(5);
  cout << longBurp(3);
  cout << longBurp(9);
  cout << longBurp(10);
  cout << longBurp(13);
  cout << longBurp(18);
  cout << longBurp(1);
}