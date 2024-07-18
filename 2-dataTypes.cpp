#include <bits/stdc++.h>

using namespace std;

int main()
{

  // * integer -> int, long, long long
  // int x;
  // long y;
  // cin >> x >> y;
  // cout << x << endl
  //      << y;

  // * decimal -> float, double
  // float x = 3.14;
  // cout << x;

  // * string -> string, getline
  //! string reads only one token (word) at a time.
  // string str1, str2;
  // cin >> str1 >> str2;
  // cout << str1 << " " << str2;

  //! get entire line at once
  string str;
  getline(cin, str);
  cout << str;

  return 0;
}