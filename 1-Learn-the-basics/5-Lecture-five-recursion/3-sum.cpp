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

// *2. functional way - function returns a value
int sum2(int n)
{
  if (n == 0)
    return 0;

  return n + sum2(n - 1);
}

// *3 factorial of a number using functional method
int fact(int n)
{
  if (n < 1)
    return 1;
  return n * fact(n - 1);
}

//* factorial using parameterized method
void fact1(int i, int res)
{
  if (i < 1)
  {
    cout << "fact is " << res;
    return;
  }
  fact1(i - 1, res * i);
}

int main()
{
  int n;
  cin >> n;
  sum1(n, 0);
  cout << sum2(n) << endl;
  cout << "factorial of " << n << " is " << fact(n) << endl;

  fact1(n, 1);
  return 0;
}