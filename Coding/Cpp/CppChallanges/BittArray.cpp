#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int N, S, P, Q;
  cin >> N >> S >> P >> Q;

  vector<int> a(S);

  for (int i = 1; i < N - 1; i++)
  {
    a[i] = a[i - 1] * P + Q;
  }

  cout << S + P + Q;

  return 0;
}