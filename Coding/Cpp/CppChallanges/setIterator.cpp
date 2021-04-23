#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
  int Q;
  cin >> Q;

  set<int> arr;

  for (int j = 0; j < Q; j++)
  {
    int y, x;
    cin >> y >> x;
    switch (y)
    {
    case 1:
      arr.insert(x);
      break;
    case 2:
      arr.erase(x);
      break;
    case 3:
      cout << (arr.find(x) == arr.end() ? "No" : "Yes") << endl;
      set<int>::iterator a, b;
      a = arr.find(x);
      cout << *a << endl;
      b = arr.end();
      cout << *b << endl;
      break;
    }
  }

  return 0;
}