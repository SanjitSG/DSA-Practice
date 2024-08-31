#include <bits/stdc++.h>

using namespace std;

void revStr(vector<char> &s)
{
  int i = 0;
  int j = s.size() - 1;

  while (i < j)
  {

    char tem = s[i];
    s[i] = s[j];
    s[j] = tem;

    i++;
    j--;
  }
}

int main()
{

  int n;
  cin >> n;

  vector<char> str;
  for (int i = 0; i < n; i++)
  {
    char ch;
    cin >> ch;
    str.push_back(ch);
  }

  revStr(str);
  for (char ch : str)
  {
    cout << ch << " ";
  }

  return 0;
}