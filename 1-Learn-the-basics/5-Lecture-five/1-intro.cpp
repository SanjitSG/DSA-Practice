#include <bits/stdc++.h>

using namespace std;

void printDigit(int n)
{
  if (n == 3)
    return;

  cout << n << " ";
  n++;
  printDigit(n);
}

int main()
{

  int n = 0;

  printDigit(n);

  return 0;
}