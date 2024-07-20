#include <bits/stdc++.h>

using namespace std;

// * Functions - types: void, return, parameterized, non parameterized.  - Pass by value, Pass by reference.

/* 1. void -- functions doesn't return anything.
void printName()
{
  cout << "Sanjit" << endl;
}
*/

/* 2.void - parameterized
void sum(int num1, int num2)
{
  int num3 = num1 + num2;
  cout << num3;
}
*/

/* 3. return -- must return a value to the place where it was called from.

int sum(int num1, int num2)
{
  int num3 = num1 + num2;
  return num3;
}
*/
/* pass by reference - '&'
void doSomething(int &num)
{
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num << endl;
}*/

/* arrays are always passed by reference.
void doSomething(int arr[], int n)
{
  arr[0] += 100;
  cout << "value inside doSomething " << arr[0] << endl;
}*/

void doSomething(string &str)
{
  str[0] = 'F';

  cout << "str inside doSomething: " << str << endl;
}

int main()
{
  /*array example
  int n = 5;
  int arr[n];

  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  doSomething(arr, n);
  cout << "value inside main " << arr[0] << endl;
  */

  string str = "Game";
  doSomething(str);

  cout << "str inside main: " << str;
  return 0;
}
