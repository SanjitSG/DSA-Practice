#include <bits/stdc++.h>

using namespace std;

void printName(int i, int n)
{
  if (i > n)
    return;
  cout << "Sanjit" << " ";
  printName(i + 1, n);
}
void printNum(int i, int n)
{
  if (i > n)
    return;
  cout << i << " ";

  printNum(i + 1, n);
}

int main()
{
  int n;
  cin >> n;
  printName(1, n);
  // printNum(1, n);

  return 0;
}