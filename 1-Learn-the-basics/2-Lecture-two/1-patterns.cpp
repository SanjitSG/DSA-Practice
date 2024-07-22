#include <bits/stdc++.h>

using namespace std;

// * this is how backend looks like in an online compiler. - Test cases

void print1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << " * ";
    }
    cout << endl;
  }
}

void print2(int n)
{
  for (int i; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void print3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void print4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}

void print5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = n; j > i; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void print6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

int main()
{

  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    print6(n);
  }

  return 0;
}