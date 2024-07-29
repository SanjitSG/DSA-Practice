#include <bits/stdc++.h>

using namespace std;

void countDigit(int n)
{
  int cnt;
  /* while (n > 0)
   {
     cnt += 1;
     n = n / 10;
   }
   cout << cnt; */

  cnt = log10(n) + 1;
  cout << cnt;

  // Time complexity => O( log10(n) )
};

void revDigit(int n)
{
  int rd = 0;

  while (n > 0)
  {
    int ld = n % 10;
    rd = (rd * 10) + ld;
    n = n / 10;
  }
  cout << rd;
}

void palindrome(int n)
{
  int temp = n;
  int revDig = 0;

  while (n > 0)
  {
    int ld = n % 10;
    revDig = (revDig * 10) + ld;
    n = n / 10;
  }
  if (temp == revDig)
    cout << "true";
  else
    cout << "false";
}

void armstrongNum(int n)
{
  int dup = n;
  int size = log10(n) + 1;
  int sum = 0;
  while (n > 0)
  {
    int ld = n % 10;
    sum += pow(ld, size);
    n = n / 10;
  }

  if (sum == dup)
    cout << "true";
  else
    cout << "false";
}

int main()
{

  int integer;
  cin >> integer;

  // countDigit(integer);
  // revDigit(integer);
  // palindrome(integer);
  armstrongNum(integer);
  return 0;
}