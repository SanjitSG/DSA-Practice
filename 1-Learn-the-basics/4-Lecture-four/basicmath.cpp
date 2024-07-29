#include <bits/stdc++.h>

using namespace std;

void countDigit(int n)
{
  while (n > 0)
  {
    int lastDigit = n % 10;
    cout << lastDigit << " ";
    n = n / 10;
  }
};

int main()
{

  int integer;
  cin >> integer;

  countDigit(integer);
  return 0;
}