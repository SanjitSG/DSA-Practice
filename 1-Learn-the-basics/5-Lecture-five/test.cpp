#include <bits/stdc++.h>
using namespace std;

int seriesSum(int n)
{
  if (n == 0)
    return 0;
  int sum;

  sum = pow(n, 3) + seriesSum(n - 1);

  return sum;
}

int main()
{
  int n = 5;

  cout << seriesSum(n);
}