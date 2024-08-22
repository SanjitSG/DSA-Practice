#include <bits/stdc++.h>

using namespace std;

void mco(int arr[], int n)
{
  int count = 0;
  int maxCount = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      count++;
      maxCount = max(count, maxCount);
    }else{
      count = 0;
    }
  }
  cout << maxCount;
}

int main()
{

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  mco(arr, n);

  cout << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}