#include <bits/stdc++.h>
using namespace std;
// *1. parameterized way // N-> 1

void sum1(int i, int sum)
{
  if (i < 1)
  {
    cout << sum << endl;
    return;
  }

  return sum1(i - 1, sum + i);
}

int sum2(int n)
{
  if (n == 0)
    return 0;

  return n + sum2(n - 1);
}

// *2. functional way - function returns a value
int main()
{
  int n;
  cin >> n;
  sum1(n, 0);
  cout << sum2(n);
}