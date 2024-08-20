#include <bits/stdc++.h>

using namespace std;

void largestElement(int arr[], int n)
{
  int maxElement = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > maxElement)
    {
      maxElement = arr[i];
    }
  }
  cout << "Max Element is: " << maxElement;
}

int main()
{

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  largestElement(arr, n);

  cout << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}