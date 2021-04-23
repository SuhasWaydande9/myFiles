#include <iostream>
#include <vector>

using namespace std;

int getAbsSum(std::vector<int> arr)
{
  int total;
  for (auto i : arr)
  {
    total += abs(i);
  };
  return abs(total);
}

int main()
{
  cout << getAbsSum({-1, -3, -5, -4, -10, 0}) << endl;
  cout << getAbsSum({8, 9, 10, 32, 101, -10}) << endl;
  cout << getAbsSum({500}) << endl;
};