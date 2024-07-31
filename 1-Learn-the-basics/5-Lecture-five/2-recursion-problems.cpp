#include <bits/stdc++.h>

using namespace std;

void printName(int i, int n)
{
  if (i > n)
    return;
  cout << "Sanjit" << " ";
  printName(i + 1, n);
}
void printNum1(int i, int n)
{
  if (i > n)
    return;
  cout << i << " ";

  printNum1(i + 1, n);
}

void printNum2(int i, int n)
{
  if (i < 1)
    return;
  cout << i << endl;
  printNum2(i - 1, n);
}
void backtracking1(int i, int n)
{
  if (i < 1)
    return;
  backtracking1(i - 1, n);
  cout << i << endl;
}

void backtracking2(int i, int n)
{
  if (i > n)
    return;
  backtracking2(i + 1, n);
  cout << i << endl;
}
int main()
{
  int n;
  cin >> n;
  // printName(1, n);
  // printNum1(1, n); //1 -> N
  printNum2(n, n); // N -> 1
  // backtracking1(n, n); // 1 -> N
  // backtracking2(1, n); // N -> 1

  return 0;
}