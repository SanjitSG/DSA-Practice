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

int main()
{

  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    print1(n);
  }

  return 0;
}