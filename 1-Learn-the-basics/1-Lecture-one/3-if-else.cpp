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

  // * 2. Ask student to enter marks, based on the marks print the grades of the students.
  /*
    int marks;
    cin >> marks;

    if (marks < 25)
    {
      cout << 'F';
    }
    else if (marks <= 44)
    {
      cout << 'E';
    }
    else if (marks <= 49)
    {
      cout << 'D';
    }
    else if (marks <= 59)
    {
      cout << 'C';
    }
    else if (marks <= 79)
    {
      cout << 'B';
    }
    else if (marks <= 100)
    {
      cout << 'A';
    }
  */

  // * 3. nested if - else

  int age;
  cin >> age;

  if (age < 18)
  {
    cout << "not eligible for job.";
  }
  else if (age < 57)
  {
    cout << "eligible for job.";
    // nested if
    if (age >= 55)
    {
      cout << " , but retirement soon.";
    }
  }
  else
  {
    cout << "retirement time.";
  }
  return 0;
}