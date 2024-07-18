#include <bits/stdc++.h>

using namespace std;

int main()
{

  // * 1. print if the user is adult or not

  /* Answer ->
  int age;
  cin >> age;

  if (age < 18)
  {
    cout << "User is not an adult";
  }
  else
  {
    cout << "User is adult";
  }
  */

  // * 2. based on the marks print the grades of the students.

  int marks;
  cin >> marks;

  if (marks < 25)
  {
    cout << 'F';
  }
  if (marks >= 25 && marks <= 44)
  {
    cout << 'E';
  }
  if (marks >= 45 && marks <= 49)
  {
    cout << 'D';
  }

  return 0;
}