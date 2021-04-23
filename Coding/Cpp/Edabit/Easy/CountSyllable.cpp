#include <iostream>
using namespace std;

int numberSyllables(std::string word)
{
  int total = 0;
  for (std::string::size_type i = 0; i < word.size(); i++)
  {
    if (word[i] == '-')
    {
      total++;
    }
  }
  return total + 1;
};

int main()
{
  cout << numberSyllables("buf-fet") << endl;
  cout << numberSyllables("beau-ti-ful") << endl;
  cout << numberSyllables("mon-u-men-tal") << endl;
  cout << numberSyllables("on-o-mat-o-poe-ia") << endl;
  cout << numberSyllables("o-ver-ly") << endl;
  cout << numberSyllables("pas-try") << endl;
  cout << numberSyllables("syl-la-ble") << endl;
};