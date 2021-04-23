#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a = 5;
int b = 7;

int *x = &a;
int *y = &b;

int *n = *(&x);
int *m = *(&y);

int main()
{
  std::cout << *n << std::endl;
  std::cout << *m << std::endl;
};