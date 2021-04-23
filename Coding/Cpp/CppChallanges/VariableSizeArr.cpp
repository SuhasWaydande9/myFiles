#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  vector<vector<long>> arr(n);

  for (int i = 0; i < q; i++)
  {
    int size;
    cin >> size;
    for (int j = 0; j < size; j++)
    {
      long num;
      cin >> num;
      arr[i].push_back(num);
    }
  };

  int m = 0, j = 0;
  for (int i = 0; i < q; i++)
  {
    cin >> i >> j;
    cout << arr[m][j] << endl;
  }

  return 0;
}