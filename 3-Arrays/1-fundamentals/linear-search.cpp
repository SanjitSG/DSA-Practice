#include <bits/stdc++.h>

using namespace std;

void linearSearch(int arr[], int n, int element)
{
  // return the index of the first occurrence of the given element in an array. if element doesn't exist return -1.

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == element)
    {
      cout << i;
      break;
    }
  }
}

int main()
{

  int n;
  cin >> n;

  int element;
  cin >> element;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  linearSearch(arr, n, element);

  cout << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i];
}