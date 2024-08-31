#include <bits/stdc++.h>

using namespace std;

bool palindrome(string &s)
{
  int n = s.length();
  int i = 0;

  while (i < n / 2)
  {
    if (s[i] != s[n - 1 - i])
      return false;
    i++;
  }

  return true;
}

int main()
{

  string str = "malayalam";
  cout << palindrome(str);

  return 0;
}