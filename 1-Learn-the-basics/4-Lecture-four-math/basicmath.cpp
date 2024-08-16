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

void printAllDivisors(int n)
{
  /*for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
    };

    // time complexity - O(N)
  }*/
  vector<int> ls;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {

      ls.push_back(i);
      if (n / i != i)
        ls.push_back(n / i);
    }
  }

  sort(ls.begin(), ls.end());
  for (auto it : ls)
    cout << it << " ";
  // time complexity - O(N/2)
}

void checkPrime(int n)
{
  int cnt = 0;
  /*for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cnt++;
    }
  }*/
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cnt++;
      if (n / i != i)
      {
        cnt++;
      }
    }
  }
  if (cnt == 2)
    cout << n << " a Prime number";
  else
    cout << n << " is not a Prime number";
}

void gcd(int a, int b)
{
  while (a > 0 && b > 0)
  {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  if (a == 0)
    cout << b;
  else
    cout << a;
}

int main()
{

  int n1, n2;
  cin >> n1 >> n2;

  // countDigit(integer);
  // revDigit(integer);
  // palindrome(integer);
  // armstrongNum(integer);
  // printAllDivisors(integer);
  // checkPrime(integer);
  gcd(n1, n2);
  return 0;
}