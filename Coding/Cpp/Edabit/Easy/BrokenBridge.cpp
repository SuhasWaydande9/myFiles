#include <iostream>

using namespace std;

bool isSafeBridge(std::string s)
{
  int ans = s.find(' ');
  if (ans > -1)
  {
    return true;
  };
  return false;
}

int main()
{
  cout << isSafeBridge("######") << endl;
  cout << isSafeBridge(" ######") << endl;
};