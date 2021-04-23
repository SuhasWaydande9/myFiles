#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string LongestWord(string sen)
{
  string word;

  stringstream s(sen);

  while (s >> word)
  {
    cout << word << endl;
  }
  return sen;
};

int main()
{
  cout << LongestWord("Suhas Waydan$$de is the Smartest");
};