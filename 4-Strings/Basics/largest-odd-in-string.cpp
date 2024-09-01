#include <bits/stdc++.h>

using namespace std;
// two pointer method and substr
string largestOdd(string &str)
{
  // length
  int n = str.length();

  // find first odd num from the end of the str
  int start = 0;
  int end = 0;

  for (int i = n - 1; i >= 0; i--)
  {
    // finding last odd index
    if ((str[i] - '0') % 2 == 1)
    {
      end = i;
      break;
    }
  }

  for (int i = 0; i < n; i++)
  {
    // finding first non-zero index
    if ((str[i] - '0') != 0)
    {
      start = i;
      break;
    }
  }

  return str.substr(start, end - start + 1);
}
int main()
{

  string str;
  cin >> str;

  cout << largestOdd(str);
  return 0;
}